#include <iostream>
#include <cmath>
using namespace std;

class punkt
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
    double distance(punkt P)
    {
        return sqrt((P.x - x) * (P.x - x) + (P.y - y) * (P.y - y));
    }
};

int main()
{
    punkt A, B;
    A.read();
    B.read();
    cout << "Odleglosc = " << A.distance(B);
    return 0;
}