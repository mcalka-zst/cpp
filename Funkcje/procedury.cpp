#include <iostream> 
using namespace std;

void powitanie(){
	string imie;
	cout<<"Podaj imie: ";
	cin>>imie;
	cout<<"Witaj "<<imie<<endl;
}
void pole(float a, float b){
	cout<<"Pole prostokata = "<<a*b<<endl;
}
//-----------------------
int main(){	
	float a=3,b=7;
	powitanie();
	pole(a,b);
	return 0;
}


