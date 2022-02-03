#include <iostream> 

using namespace std;

int main()
{
	int tab[10];
	for(int i=0; i<10; i++){
		cout<<"Podaj element: ";
		cin>>tab[i];
	}
	cout<<"Oto Twoje elementy: ";
	for(int i=0; i<10; i++) cout<<tab[i]<<" ";
	return 0;
}
