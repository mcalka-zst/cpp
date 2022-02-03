#include <iostream>
#include <string>
using namespace std;
//-------------------------------
string cezar(string s, int k)
{
	k = k % 26; //0,1,2 ..., 25
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
	return s;
}
//---------------------------
int main()
{
	//WERSJA 3 Z FUNKCJĄ
	string s;
	int k; // klucz szyfrujacy
	cout << "Wpisz tekst do zaszyfrowania (duze litery): ";
	getline(cin, s);
	cout << "klucz = ";
	cin >> k;
	cout << "Po zaszyfrowaniu: " << cezar(s, k);
	return 0;
}
