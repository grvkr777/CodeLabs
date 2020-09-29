#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,sum=0;
        cin>>k;
        while(k!=0){
            
            sum=sum+k%10;
            k=k/10;

        }
    cout<<sum<<endl;
    }
    
return 0;
}