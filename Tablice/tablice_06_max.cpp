#include <iostream>

using namespace std;

int main()
{
	int tab[] = {3, 5, 447, -1, 34, 12};
	int max = tab[0];
	for (int i = 1; i < 6; i++)
	{
		if (tab[i] > max)
			max = tab[i];
	}
	cout << "Max = " << max << endl;
	return 0;
}
