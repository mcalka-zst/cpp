#include <iostream> 

using namespace std;

int main(){
	long long int n, silnia=1;
	cout<<"n = ";
	cin>>n;
	for(int i=1; i<=n; i++) silnia*=i; //inaczej silnia=silnia*i;
	cout<<n<<"! = "<<silnia;
	return 0;	
}

