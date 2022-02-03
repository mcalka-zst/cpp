#include "zwierzeta.h"

using namespace std;
//---------------------------
void glosy(zwierze &zwierzak)
{
  zwierzak.daj_glos();
}
//--------------------------
int main()
{
  zwierze moj_zwierzak;
  kon moj_kon;
  kot moj_kot;

  cout << "Korzystanie z funkcji wirtualnej poprzez referencje\n ";
  glosy(moj_zwierzak); //wyswietli: Nie wiadomo jaki dzwiek
  glosy(moj_kon);      //wyswietli: Ihahahahaha
  glosy(moj_kot);      //wyswietli: Miauuuuuuuu
  cout << endl;

  cout << "Korzystanie z funkcji wirtualnej poprzez wskazniki: " << endl;
  zwierze *wsk;
  wsk = &moj_zwierzak;
  wsk->daj_glos(); //wyswietli: Nie wiadomo jaki dzwiekk
  wsk = &moj_kon;
  wsk->daj_glos(); //wyswietli: Ihahahahaha
  wsk = &moj_kot;
  wsk->daj_glos(); //wyswietli: Miauuuuuuuu
  return 0;
}
