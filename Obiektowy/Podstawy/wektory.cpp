#include <iostream>
#include <string>

using namespace std;

class Vector
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

    void write()
    {
        cout<<"["<<x<<", "<<y<<"]";
    }

    double multiple(Vector v)
    {
        return x * v.y + y * v.y;
    }

    Vector add(Vector v)
    {
        Vector result;
        result.x = x + v.x;
        result.y = y + v.y;
        return result;
    }
};

int main()
{
    Vector u,v, result;
    u.read();
    v.read();
    result=u.add(v);
    cout << "Iloczyn skalarny = " << u.multiple(v)<<endl;
    cout<<"Suma  = ";
    result.write();
    return 0;
}