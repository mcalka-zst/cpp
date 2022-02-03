#include <iostream>
#include <cmath>
using namespace std;

class triangle
{
private:
    double a, b, c;

public:
    void read()
    {
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;
    }
    double field()
    {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    double perimeter()
    {
        return a + b + c;
    }
};
int main()
{
    triangle t;
    t.read();
    cout << "Pole wynosi " << t.field() << ", a obwod rowna sie " << t.perimeter();
    return 0;
}