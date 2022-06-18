#include<iostream>
using namespace std;
//  murge a two  array 
 void mearg(int arr1[],int n,int arr2[],int arr3[]){
     int i=0;
     int j=0;
     int k=0;
     while (i<n&&j<n)
     {
        if (arr1[i]<arr2[j])
        {
          arr1[i++] =arr3[k++];
        }
        else
        {
            arr2[j++]= arr3[k++];
        }
        while (i<n)
        {
           arr1[i++]; arr3[k++];
        }
          while (j<n)
        {
           arr2[j++]; arr3[k++];
        }     
     }
     
 }
void print(int ans[],int n){
    for (int  i = 0; i < n; i++)
    {
       cout<<ans[i]<<"";
       cout<<endl;
    }    
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[4]={2,4,6,8};
    int arr3[9]={0};
  int find = mearg(arr3,9);
   cout<<"ans"<<find<<endl; 
    print(arr3,9);
return 0;
}
