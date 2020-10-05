#include<iostream>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while (t--){
        long int n,k,x,y,i=0,j;
        cin>>n>>k>>x>>y;
   long int count[n]={0},flag=0;
   while(1){
         if(count[x]){
               flag=1;
               break;
   }
   count[x]++;
   x=(x+k)%n;
   if(count[y]){
         flag=2;
         break;
   }
   }
   if(k==0||k==n){
         if(x==y){
          cout<<"YES"<<endl;}
         else{
               cout<<"NO"<<endl;
         }
   }
   else if(flag==2){
         cout<<"YES"<<endl;
   }
   else{
         cout<<"NO"<<endl;
   }
    }
    return 0;
}
    
        


 