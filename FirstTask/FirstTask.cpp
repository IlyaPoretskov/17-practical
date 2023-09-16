#include <iostream>

using namespace std;

void swapNumb(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a = 10;

    int b = 20;

    swapNumb(&a, &b);

    std::cout << a << " " << b;

    // 20 10
}