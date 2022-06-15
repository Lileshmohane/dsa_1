#include<iostream>
using namespace std;
//  find a pivt element in a  rotate a array  
/*
int getpvt(int arr[],int n){
    int s= 0;
    int e= n-1;
    int mid =  s+(e-s)/2;
    for (int i = 0; i < n; i++)
    {
       
       if (arr[mid]>=arr[0])
       {
         s=mid+1;
       }
       else
       {
        e= mid;
       }
       mid =  s+(e-s)/2;
    }
    return s;
}
int main(){
    // arr give by  7,8,1,3,5
int arr[5]={3,5,7,1,8};
cout<<" pivat element is "<<getpvt(arr,5)<<endl;
*/
int getpvt(int arr[],int n){
    int s= 0;
    int e= n-1;
    int mid =  s+(e-s)/2;
    for (int i = 0; i < n; i++)
    {
       
       if (arr[mid]>=arr[0])
       {
         s=mid+1;
       }
       else
       {
        e= mid-1;
       }
       mid =  s+(e-s)/2;
    }
    return e;
}
int main(){
    // arr give by  7,8,1,3,5
int arr[5]={7,4,1,2,9};
cout<<" pivat element is "<<getpvt(arr,5)<<endl;
return 0;
}
