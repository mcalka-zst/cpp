#include <iostream>

using namespace std;

int main()
{
	char znak = 'A';
	char znak2 = znak + 2;
	cout << znak << " + " << znak2 << " = " << znak + znak2 << endl
		 << endl;
	for (char i = 'A'; i <= 'Z'; i++)
		cout << i << " ";
	cout << endl;
	for (char i = 65; i <= 90; i++)
		cout << i << " ";
	cout << endl;
	for (int i = 'A'; i <= 'Z'; i++)
		cout << i << " ";
	return 0;
}
