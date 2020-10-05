#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

    long int t;
    cin>>t;
    while (t--){
    	int n,k,m=0,count=0;
    	long int arr[100000000];
    	cin>>n>>k;
    	for(long int i=0;i<n;i++){
    		cin>>arr[i];
    	}
    	for(long int i=0;i<100000000;i++){
    		m=arr[i]-k;
            arr[i+1]+=m;
            count++;
            if(arr[i]<k){
            	cout<<count<<endl;
            	break;
            }
    	}
    }
}