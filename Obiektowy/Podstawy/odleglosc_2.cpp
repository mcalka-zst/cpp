#include <iostream>
#include <cmath>
using namespace std;

class point
{
private:
    double x, y;
public:
    void read()
    {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
    }
    double distance(point P)
    {
        return sqrt((P.x - x) * (P.x - x) + (P.y - y) * (P.y - y));
    }
};

int main()
{
    point A, B;
    A.read();
    B.read();
    cout << "Odleglosc = " << A.distance(B);
    return 0;
}