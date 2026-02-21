
#include <iostream>
using namespace std;
int main()
{
    int i = 1, n = 5, oddsum = 0;

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            oddsum += i;
        }
        i++;
    }
    cout << oddsum;
    return 0;
}