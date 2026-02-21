#include<iostream>
using namespace std;
 
int sumofArray(int arr[], int n){
    int sum=0;
    for(int i=0; i<n;i++){//fix the loop condition
      sum+=arr[i]; //update the sum 
     
    }
    return sum;//returning final sum
}
int main(){
    int n,ans;
    cin>>n;

    int arr[n];//declare an array
    cout<<"enter"<<n<<"elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];//input elements from user
    }
    int result= sumofArray(arr,n);//call the function with array 
    cout<<"the sum of the array is :"<<result<<endl;//print the sum 
   return 0;
}