#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 100, y = 20, z = 10;
    int p = 0, q = 0, r = 0;
    int choice = 1;
    switch (choice)
    {
    case 1:
        p = n / x;
        n = n % x;
        
    case 2:
        q = n / y;
        n = n % y; 
     
    case 3:
        r = n / z;
        break;
    default:
        cout << "invalid outout" << endl;
    }
    cout << "100's:" << p << endl;
    cout << "20's:" << q << endl;
    cout << "10's:" << r << endl;
    return 0;
}