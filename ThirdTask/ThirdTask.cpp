#include <iostream>
#include <cstring>

using namespace std;


bool substr(const char* a, const char* b)
{
    for (int i = 0; a[i]; i++)
    {
        for (int j = 0; ; j++)
        {
            if (!b[j]) return true;

            if(a[i + j] != b[j]) break;
        }
    }
    return false;
}

void print_bool(bool n)
{
    if (n == true)
    {
        cout << "true ";
    }
    else
    {
        cout << "false ";
    }
}

int main() 
{
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";

    print_bool(substr(a, b));

    print_bool(substr(a, c));

    cout << endl;

    system("pause");

    // true false
}