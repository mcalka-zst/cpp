#include <iostream>
#include <cmath>
using namespace std;

class punkt
{
    public: 
        double x,y;
    void read()
    {
        cout<<"x = ";
        cin>>x;
        cout<<"y = ";
        cin>>y;
    }

};

double distance(punkt P1, punkt P2 )
{
    return sqrt((P2.x-P1.x)*(P2.x-P1.x)+ (P2.y-P1.y)*(P2.y-P1.y));
}

int main()
{
    punkt A,B;
    A.read();
    B.read();
    cout<<"Odleglosc = "<<distance(A,B);
    return 0;
}