#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,reversedno=0,remainder;
    cin>>n;
    while(n>0){
        remainder=n%10;
        reversedno=reversedno*10+remainder;
        n=n/10;
    }   
    cout<<reversedno<<endl;
 }
}
