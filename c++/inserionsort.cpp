#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int n, vector<int> &arr)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j= i-1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }

            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main(){
    vector<int> arr={5,2,9,1,6};
    int n=arr.size();

    insertionSort(n,arr);

    cout<<"Sorted array:";
    for(int num: arr){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}