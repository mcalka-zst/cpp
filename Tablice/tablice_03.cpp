#include <iostream> 

using namespace std;

int main()
{
	const int n=5;
	int tab[n];
	for(int i=0; i<n; i++){
		cout<<"Podaj element: ";
		cin>>tab[i];
	}
	cout<<"Oto Twoje elementy: ";
	for(int i=0; i<n; i++) cout<<tab[i]<<" ";
	return 0;
}
