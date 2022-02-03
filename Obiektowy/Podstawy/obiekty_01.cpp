#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string firstname; // pola klasy
    string lastname;
    int year;
};

int main()
{
    Person p1, p2; //deklaracja obiektów klasy Person
    p1.firstname = "Maciek";
    p1.lastname = "Mackowski";
    p1.year = 2001;
    cout << "Podaj imie: ";
    cin >> p2.firstname;
    cout << "Podaj nazwikso: ";
    cin >> p2.lastname;
    cout << "Podaj rok: ";
    cin >> p2.year;
    cout << p1.firstname << " " << p1.lastname << " urodzony w " << p1.year << " roku" << endl;
    cout << p2.firstname << " " << p2.lastname << " urodzony w " << p2.year << " roku" << endl;

    return 0;
}