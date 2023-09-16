#include <iostream>

using namespace std;


void reverse_ar(int* pa)
{
    for (int i = 0; i < 5; i++)
    {
        int tmp = *(pa + i);
        int* first = pa + i;

        int tmp2 = *(pa + 9 - i);
        int* second = pa + 9 - i;

        *first = *second;
        *second = tmp;
    }
}


int main() 
{
    int a[10] = { 1, 6, 10, 56, 34, 38, 3245, 345, 23, 3 };

    int* pa = a;

    cout << *pa << endl;

    reverse_ar(pa);

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n";
    system("pause");
}