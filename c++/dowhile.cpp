#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    bool isPrime = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % 2 == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "prime no\n";
    }
    else
    {
        cout << "not prime\n";
    }
    return 0;
}