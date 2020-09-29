#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        if ( a>b){
            cout<<">"<<endl;
        }
        else if(a<b){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
return 0;
}