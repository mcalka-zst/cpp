#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string firstname; // pola klasy
    string lastname;
    int year;

public:
//deklaracje metod
    Person(); 
    Person(string, string , int); 
    ~Person();
    void read();
    void write();

};

int main()
{
    Person p1, p2;                         //działa konstruktor bezparametrowy
    Person p3("Jasio", "Jasiowski", 2022); //działa konstruktor z parametrami
    p1.read();
    p2.read();
    p1.write();
    p2.write();
    p3.write();
    cout << endl;
    return 0;
}
//:: operator zakresu
//definicje
Person::Person() //konstruktor bezparametrowy - tworzy obiekt klasy
{
    cout << "Tworzymy obiekt - dziala konstruktor bezparametrowy\n";
}
Person::Person(string f, string l, int y) //konstruktor z
{
    cout << "Tworzymy obiekt - dziala konstruktor parametrowy\n";
    firstname = f;
    lastname = l;
    year = y;
}
Person::~Person()
{
    cout << firstname << " " << lastname << " zostal usuniety" << endl;
}
void Person::read() //definicja metody (funkcji wewnątrz klasy)
{
    cout << "Podaj imie: ";
    cin >> firstname;
    cout << "Podaj nazwikso: ";
    cin >> lastname;
    cout << "Podaj rok: ";
    cin >> year;
}
void Person::write()
{
    cout << firstname << " " << lastname << " urodzony w " << year << " roku" << endl;
}