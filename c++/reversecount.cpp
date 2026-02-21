#include<iostream>
using namespace std;
int main(){
int i=1;
int n;
cin>>n;
while(n>=i){
    int j=10;
    int value=i;
    while(j>=i){
        cout<<value;
        value-=1;
        j--;
        n--;
      
    }
    i-=1;
    cout<<endl;
}return 0;

}