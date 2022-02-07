#include <iostream>
#include <cmath>
using namespace std;

class point
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

double distance(point P1, point P2 )
{
    return sqrt((P2.x-P1.x)*(P2.x-P1.x)+ (P2.y-P1.y)*(P2.y-P1.y));
}

int main()
{
    point A,B;
    A.read();
    B.read();
    cout<<"Odleglosc = "<<distance(A,B);
    return 0;
}