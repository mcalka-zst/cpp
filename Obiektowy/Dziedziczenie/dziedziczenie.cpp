#include <iostream>

using namespace std;
// definicja klasy
class pies
{
protected:
  string imie;

public:
  pies()
  {
    cout << "Zostal utworzony  nowy pies" << endl;
  }
  ~pies()
  {
    cout << imie << " ZOSTAL USUNIETY\n";
    system("Pause");
  }
  void wczytaj()
  {
    cout << "Podaj imie psa ";
    cin >> imie;
  }
  void daj_glos()
  {
    cout << imie << " MOWI HAU HAU\n";
  }
};
class zly_pies : public pies
{
public:
  void daj_glos()
  {
    cout << imie << " MOWI WRRR HAU HAU WRRRR\n";
  }
  void warcz()
  {
    cout << imie << " MOWI WRRRRRRRRRR\n";
  }
};
//funkcja glowna
int main()
{
  pies normalny;
  zly_pies zly;
  normalny.wczytaj();
  normalny.daj_glos();
  zly.wczytaj(); //uruchomi się daj_glos z klasy zly_pies
  zly.pies::daj_glos(); //uruchomi się daj_glos z klasy pies
  zly.daj_glos();
  // normalny.warcz(); TU BĘDZIE BŁĄD
  zly.warcz();
  return 0;
}
