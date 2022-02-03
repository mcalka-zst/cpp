#include <iostream> 
#include <string>
using namespace std;

int main()
{
	string s;
	cout<<"Wpisz tekst: ";
	getline(cin, s);
	for(int i=0; i<s.size(); i++) cout<<s[i]<<" ";
	cout<<endl;
	for(int i=s.size()-1; i>=0; i--) cout<<s[i]<<" ";
	return 0;
}
