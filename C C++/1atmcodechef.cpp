#include<iostream>
using namespace std;
int main()
{int x;
float y;
float z=0.50;
cout.precision(2);
cin>>x;
cin>>y;
if (x%5==0){
    if(x+z<y){
    cout<<fixed<<y-x-z;}
    else{
        cout<<fixed<<y;
    }
}

else{
    cout<<fixed<<y;
}
return 0;
}