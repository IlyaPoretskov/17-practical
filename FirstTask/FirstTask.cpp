#include <iostream>

using namespace std;

void swapNumbers(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a = 10;

    int b = 20;

    swapNumbers(&a, &b);

    std::cout << a << " " << b << "\n";
    system("pause");
    // 20 10
}