#include<iostream>
using namespace std;
int main(){
    int arr[]={5,1,5,5,2,3};
    //selection sort
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            else{
                swap(arr[j],arr[j-1]);
                j--;
            }
        }

    }
    //storing max number
    int x=0;
    for(int i=0;i<n;i++){
        x*=10;
        x+=arr[i];
    }
    //max num
    cout<<"min number is"<<x<<endl;
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    int x2=0;
    for(int i=0;i<n;i++){
        x2*=10;
        x2+=arr[i];
    }
    cout<<"second min num is"<<x2<<endl;
    cout<<"sum is"<<x+x2<<endl;
    return 0;


}