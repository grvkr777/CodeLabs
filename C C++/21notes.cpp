#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=0,hund=0,fifty=0,ten=0,five=0,two=0,one=0;
        
        cin>>n;
        if(n>=100){
            hund=n/100;
            n=n%100;
        }
        if(n>=50){
            fifty=n/50;
            n=n%50;
        }
        if(n>=10){
            ten=n/10;
            n=n%10;
        }
        if(n>=5){
            five=n/5;
            n=n%5;
        }
        if(n>=2){
            two=n/2;
            n=n%2;
        }
        if(n>=1){
            one=n;
        }
        
        cout<<hund+fifty+ten+five+two+one<<endl;
    }
    return 0;
}