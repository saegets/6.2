#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        a[i] = rand();
}

void Num(int* a, const int size, int& k)
{
    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 1)
        {
            k++;
        }
}

void print(int* a, const int size, int& k)
{
    cout << setw(4) << "a[10] = {";
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << a[i] << ", ";
    }
    cout << "}" << endl;
    cout << endl;
    
    cout << "Number =" << k << endl;
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    const int n = 10;
    int a[n];
    int k = 0;
    Create(a, n);
    Num(a, n, k);
    print(a, n, k);

    return 0;
}

