#include<iostream>
using namespace std;
 void swap(int *x ,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
 }
  int printarr(int arr[], int size){
     for (int  i = 0; i < size; i++)
     {
        cout<<arr[i]<<" ";
        
        cout<<endl;
     }
     
  }
  void selectionsort(int arr[],int size){
   for (int  i = 0; i <size-1 ; i++)
   {
     for (int j = i+1; j <size; j++)
     {
         int minindex = i;
          if (arr[minindex]>arr[j])
          {
             minindex =  j;
          }
          swap(arr[minindex],arr[i]);
     }
     
   }
   
  }
 int main(){
    cout<<"enter the number : "<<endl;
    int n; 
    cin>>n;
    int arr[n]= {8,5,2,1,0,9,6,4};
    selectionsort(arr,n);
    cout<<"answer is : "<<endl;
   printarr(arr,n);
return 0;
}
