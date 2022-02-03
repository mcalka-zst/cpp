#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string firstname; // pola klasy
    string lastname;
    int year;

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
};

int main()
{
    Person p1, p2; //deklaracja obiektów klasy Person
    p1.read();
    p2.read();
    p1.write();
    p2.write();
    return 0;
}