#include <iostream> 
#include "funkcje.h"
using namespace std;

//-----------------------
int main()
{
	int wybor;
	cout<<"Wybierz liczbe: \n";
	cout<<" 1 - trojkat\n";
	cout<<" 2 - trapez\n";
	cin>>wybor;
	switch(wybor){
		case 1: cout<<"Pole trojkata = "<<trojkat()<<endl;
				break;
		case 2:	cout<<"Pole trapezu = "<<trapez()<<endl;
				break;
		default:  cout<<"Wybrales bledna opcje";
	}	
	return 0;
}


