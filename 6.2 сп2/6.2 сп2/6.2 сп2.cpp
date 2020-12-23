#include <cmath>
#include <iomanip>
#include <time.h>
#include <iostream>

using namespace std;
void Create(int* a, const int size, int i)
{
	a[i] = rand();

	if (i < size - 1)
		Create(a, size, i + 1);
}

void Print(int* a, const int size, int i, int& k)
{
	if (i == 0)
	{
		cout << "a[10]={ ";
	}
	cout << setw(4) << a[i] << ", " ;
	if (i < size - 1)
		Print(a, size, i + 1, k);
	else
		cout << "}" << "\n" << "number =" << k << endl;

}

int number(int* a, const int size, int i, int& k)
{
	if (a[i] % 2 == 1)
		k++;
	if (i < size - 1)
		return number(a, size, i + 1, k);
	else
		return k;
}


int main()
{
	srand((unsigned)time(NULL));

	const int n = 10;
	int a[n];
	int k = 0;
	Create(a, n, 0);
	number(a, n, 0, k);
	Print(a, n, 0, k);

	return 0;
}
