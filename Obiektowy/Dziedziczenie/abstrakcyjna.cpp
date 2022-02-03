#include <iostream>
#include <cmath>

using namespace std;
//----------------------------------------------------------------------
class figura
{
protected:
       const double pi = 3.14;

public:
       virtual double pole() = 0; //metody czysto wirtualne
       virtual double obwod() = 0;
       void wyswietl()
       {
              cout << "Pole wynosi " << pole() << endl;
              cout << "Obwod wynosi " << obwod() << endl
                   << endl;
       }
};
//----------------------------------------------------------------------
class kolo : public figura
{
private:
       double r;

public:
       kolo()
       {
              cout << "Podaj promien r=";
              cin >> r;
       }
       double pole()
       {
              return pi * r * r;
       }
       double obwod()
       {
              return 2 * pi * r;
       }
};
//----------------------------------------------------------------------
class kwadrat : public figura
{
private:
       double a;

public:
       kwadrat()
       {
              cout << "Podaj bok a=";
              cin >> a;
       }
       double pole()
       {
              return a * a;
       }
       double obwod()
       {
              return 4 * a;
       }
};
//------------------------------------------------------------------------
int main()
{
       //figura fig; //BLAD
       cout << "Kolo\n";
       kolo kol;
       kol.wyswietl();
       cout << " \n\nKwadrat\n";
       kwadrat kwad;
       kwad.wyswietl();
       system("PAUSE");
       return 0;
}
