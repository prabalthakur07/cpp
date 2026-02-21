#include <iostream>
using namespace std;
int main()
{

    int  i, j;
    

    int arr[5]={2,3,3,4,5};
    
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return i + 1;
}