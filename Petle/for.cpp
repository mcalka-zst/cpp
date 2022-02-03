#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << "\n\n";
    for (int i = n; i >=0; i-=2)
    {
        cout << i << " ";
    }

    return 0;
}
