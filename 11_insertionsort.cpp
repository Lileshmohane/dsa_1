#include<iostream>
using namespace std;
// insertion short 
void insertionsort(int arr[], int n){
    int i , j ;
    for (int  i = 1 ; i < n; i++)
    {
       int temp = j-1;
       while(arr[j>j+1]&&arr[j>=0])
       {
        j = j+1;
       }
       j = j-1;
       }
    }
void printarr(int arr[],int size ){
    for (int  i = 0; i < size ; i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main(){
 int arr [5]= {12,11,13,9,5};
 printarr(arr,5);
 insertionsort(arr,5);
return 0;
}
