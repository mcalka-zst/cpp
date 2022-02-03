#include <iostream>
#include <string>
using namespace std;

int main()
{
	//WERSJA 1
	string s;
	int k; // klucz szyfrujacy
	cout << "Wpisz tekst do zaszyfrowania (duze litery): ";
	getline(cin, s);
	cout << "klucz = ";
	cin >> k;
	for (int i = 0; i < s.size(); i++)
	{
		s[i] += k;
	}
	cout << "Po zaszyfrowaniu: " << s;
	return 0;
}
