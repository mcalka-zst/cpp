#include <iostream> 
#include <cstdlib>//dla srand i rand
#include <ctime>//dla time
using namespace std;


//-----------------------
int main(){	
	cout<<"Liczba sekund od 01.01.1970: "<<time(0)<<endl<<endl;
	srand(time(0));// generuje liczby pseudolosowe, time(0) zwraca liczbe sekund od 01.01.1970
	for(int i=1; i<=6; i++) cout<<rand()%49+1<<" ";//rand pobiera kolejne wylosowane liczby (i zamienie od 1 do 49)
	
	return 0;
}


