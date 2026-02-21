#include<iostream>
using namespace std;
int main(){
int i=1;
int n;
cin>>n;
int num=1;
while(i<=n){
    int j=1;
    
    while(j<=i){
        cout<<num<<" " ;
        num++;
        j++;
        
    }
    i++;
    cout<<endl;
}return 0;

}