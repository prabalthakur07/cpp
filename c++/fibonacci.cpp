#include<iostream>
using namespace std;
void fibonacciseries(int n){
int a=0, b=1,c;
cout<<"the fibonacci series is:";
for(int i=0;i<n;i++){
cout<<a<<" ";
c=a+b;
a=b;
b=c;
}
cout<<endl;
}
int main(){
    int n;
    cin>>n;
   fibonacciseries(n);
return 0;
}