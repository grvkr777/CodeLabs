#include <bits/stdc++.h>

using namespace std;
#define ele "\n"
#define sle 1
#define zero 0
#define pb push_back
#define fl(i,b) for (int i=0;i<(b);i++)
#define sp " "
#define loopy(i,a,b) for (int i=a; i<(b); i++)
#define writey(s) fl(i,s.size())cout<<s[i]<<sp;
 int main(){
     
     int t;
     cin>>t;
     for(int i=zero;i<t;i++){
           int n;
           cin>>n;
           long int a[]={zero,2,3,sle,5,4};
           vector<long int> x;
           long int k=pow(2,(long int)log2(n));
           if(k==n){
           if(k==sle)cout<<sle;
           else cout<<-1;
           cout<<ele;
           continue;
           }
           else{
                 loopy(i,sle,n+sle){
                       if(i<=5)x.pb((long int)a[i]);
                       else{
                             k=pow(2,(long int)log2(i));
                             if(k==i){
                                   x.pb(i+sle);
                                   x.pb(i);
                                   i++;
                             
                             }
                             else x.pb(i);
                       }
                 }
           }
           writey(x);
           cout<<ele;
     }
     return 0;
 }