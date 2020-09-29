#include<iostream>
using namespace std;
int secondlargest(int arr[],int n){
    int res=-1, largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }else if(arr[i]!=arr[largest]){
            if(res==-1||arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return arr[res];
}
int main(){
    int arr[]={10,52,25,45,20,8,20,99};
    cout<<secondlargest(arr,8)<<endl;
return 0;
}