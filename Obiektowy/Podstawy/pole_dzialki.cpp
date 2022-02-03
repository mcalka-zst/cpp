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
        bool ok;
        do
        {
            cout << "a = ";
            cin >> a;
            cout << "b = ";
            cin >> b;
            cout << "c = ";
            cin >> c;
            if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || c + a <= b)
            {
                ok = false;
                cout << "Podales bledne dane!!!\n";
            }
            else
            {
                ok = true;
            }

        } while (!ok); //ok==false
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
    int n;
    triangle t[1000];
    double suma = 0;
    cout << "Wpisz liczbe trojkatow z jakich sklada sie twoja dzialka (mniej niz 1000): ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nTrojkat nr " << i + 1 << "\n";
        t[i].read();
        suma += t[i].field();
    }
    cout << "Dzialka ma pole:  " << suma;

    return 0;
}