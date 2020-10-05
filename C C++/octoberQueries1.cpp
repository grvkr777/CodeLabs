#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	#endif
	  ll t;
	  cin>>t;
	  while(t--)
	 { ll n,k;
	 	  cin>>n>>k;
	 	  vector<ll> arr(n);
	 	  for(ll j=0 ; j<n ;j++)
	 	  {
	 	  	cin>>arr[j];
	 	  }
	 	   
	 	  ll i=0,flag=0,ans=0;
	 	  while(i!=n-1)
	 	  {
	 		if(arr[i]<k)
	 		{
	 			cout<<i+1<<"\n";
	 			flag=1;
	 			break;
	 		}
	 		else if(arr[i]==k)i++;
	 		else
	 		{
	 			ans=arr[i]-k;
	 			arr[i]=arr[i]-ans;
	 			arr[i+1]+=ans;
	 			
	 			i++;
	 		}
	 	 }
	 	
	 
	 	if(flag==0)
	 	{
	 		ll res = (arr[i]/k)+(i+1);
	 		
	 		cout<<res<<"\n";
	 	}
	 }
	return 0;
}