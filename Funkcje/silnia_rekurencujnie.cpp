#include <iostream>
using namespace std;
//-----------------------
double silnia(int n)
{
	//wersja iteracyjna
	double wynik = 1;
	for (int i = 1; i <= n; i++)
		wynik *= i;
	return wynik;
}
//-----------------------
double silniaRek(int n)
{
	//wersja rekurencyjna
	if (n == 0 || n == 1)
		return 1;
	return n * silniaRek(n - 1);
}

//-----------------------
int main()
{
	int n;
	cout << "n = ";
	cin >> n;
	cout << n << "! = " << silnia(n) << endl;
	cout << n << "! = " << silniaRek(n) << endl;
	return 0;
}
