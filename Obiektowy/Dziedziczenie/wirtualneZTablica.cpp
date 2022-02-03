
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

  zwierze moj_zwierz;
  kon moj_kon;
  kot moj_kot;

  zwierze zwierzaki[] = {moj_zwierz, moj_kon, moj_kot};
  for (int i = 0; i < 3; i++)
    glosy(zwierzaki[i]);

  cout << "--------------------------------------\n";

  zwierze **zwierzaki2 = new zwierze *[3];
  zwierzaki2[0] = new zwierze();
  zwierzaki2[1] = new kon();
  zwierzaki2[2] = new kot();

  for (int i = 0; i < 3; i++)
    glosy(*zwierzaki2[i]);
  return 0;
}
