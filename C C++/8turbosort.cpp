#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int b=sizeof(a)/sizeof(a[0]);
    sort(a,a+b);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << endl; }
    }
