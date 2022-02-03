#include <iostream>
using namespace std;

void funkcja(int &a, int &b)
{
    a++;
    b = a + b;
    cout << b << endl;
}
int main()
{

    int x = 3, y = 5;
    funkcja(x, y);
    cout << x << " " << y << endl;
    return 0;
}
