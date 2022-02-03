#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    int i = 1;
    do
    {
        cout << i++ << " ";
    } while (i <= n);

    return 0;
}
