#include<iostream>
using namespace std;
int main()
{
   int count=0;
int n,k,i;
cin>>n>>k;
   int arr[n];
   for(i=0;i<n;i++){
   cin>>arr[i];
   }for(i=0;i<n;i++){
    if (arr[i]%k==0)
    count++;
   }
   cout<<count;
   return 0;}
   