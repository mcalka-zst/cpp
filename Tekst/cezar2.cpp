#include <iostream>
#include <string>
using namespace std;

int main()
{
	//WERSJA 2 LEPSZA
	string s;
	int k; // klucz szyfrujacy
	cout << "Wpisz tekst do zaszyfrowania (duze litery): ";
	getline(cin, s);
	cout << "klucz = ";
	cin >> k;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += k;
			if (s[i] > 'Z')
				s[i] -= 26;
			if (s[i] < 'A')
				s[i] += 26;
		}
	}
	cout << "Po zaszyfrowaniu: " << s;
	return 0;
}
