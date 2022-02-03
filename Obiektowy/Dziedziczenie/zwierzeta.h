#include <iostream>

using namespace std;

class zwierze
{
  public:
   void virtual daj_glos()
   {
     cout<<"Nie wiadomo jaki dzwiek  "<<endl;
   }
};
//....................

class kon : public zwierze
{
  public:
   void daj_glos()
  {
    cout<<"Ihahahahaha"<<endl;
  }
};

//....................

class kot : public zwierze
{
  public:
   void daj_glos()
  {
    cout<<"Miauuuuuuuu"<<endl;
  }
};
