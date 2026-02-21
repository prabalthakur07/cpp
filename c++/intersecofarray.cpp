#include<iostream>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2){
    cout<<"intersection:";
    for (int i=0; i<size1; i++){
        bool found= false;

        for(int j=0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                found=true;
                arr2[j]=-1;
                break;
            }
        }
        if (found){
            cout<<arr1[i]<<" ";
        }
    }
    cout<<endl;
}
   
 int main(){
    int arr1[]={1,2,2,3,4};
    int arr2[]={2,3,5};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    intersection(arr1,size1,arr2,size2);
    

    return 0;
 }