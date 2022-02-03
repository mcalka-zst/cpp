#include <iostream> 

using namespace std;
//deklaracje funkcji 
double trojkat();
double trapez();
//definicje funkcji 
double trojkat()
{
	double a,h;
	cout<<"Podaj podstawe a = ";
	cin>>a;
	cout<<"Podaj wysokosc h = ";
	cin>>h;
	return 0.5*a*h;
	
}
//-----------------------
double trapez()
{
	double a,b, h;
	cout<<"Podaj podstawe a = ";
	cin>>a;
	cout<<"Podaj podstawe b = ";
	cin>>b;
	cout<<"Podaj wysokosc h = ";
	cin>>h;
	return 0.5*(a+b)*h;
}
