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
     Person() //konstruktor bezparametrowy - tworzy obiekt klasy
    {
        cout<<"Tworzymy obiekt - dziala konstruktor bezparametrowy\n";  
        number++;
    }
    Person(string f, string l, int y) //konstruktor z 
    {
        cout<<"Tworzymy obiekt - dziala konstruktor parametrowy\n";
        firstname=f;
        lastname = l;
        year = y;
        number++;
    }
    ~Person()
    {
        cout<<firstname<<" "<<lastname<<" zostal usuniety"<<endl;
    }
    void read() //definicja metody (funkcji wewnątrz klasy) 
    {
        cout << "Podaj imie: ";
        cin >> firstname;
        cout << "Podaj nazwikso: ";
        cin >> lastname;
        cout << "Podaj rok: ";
        cin >> year;
    }
    void write()
    {
        cout << firstname << " " << lastname << " urodzony w " << year << " roku" << endl;
    }

    static int number; //zmienna statyczna - wspólna dla wszystkuch obiektów

    static void howmany()
    {
        cout<<"\nW naszym programie sa "<<number<<" osoby\n";
    }
};

int Person::number=0;
int main()
{
    Person p1, p2; //działa konstruktor bezparametrowy
    Person::howmany();
    Person p3("Jasio","Jasiowski",2022);//działa konstruktor z parametrami
    Person::howmany();
    p1.read();
    p2.read();
    p1.write();
    p2.write();
    p3.write();
    cout<<endl;
    return 0;
}