#include <iostream> 

using namespace std;

int main()
{
	string dane[]={"Jan Jankowski", "Piotr Piotrowski","Pawel Pawlowski"};
	//od C++ 11
	//pętla po zakresie
	cout<<"Oto twoje dane:\n\n";
	for(string x:dane) cout<<x<<endl;
	return 0;
}
