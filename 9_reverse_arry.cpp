#include<iostream>
using namespace std;
 // reverse the array 
  void reverse(int arr[], int n ){
      int  start = 0;
      int  end =n-1;
      while (start<=end)
      {
          swap (arr[start],arr[end]);
           start++;
           end--;
      }
      
  }
  void printarr(int arr[],int n){
      for (int  i = 0; i <n; i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<endl;
  }
 int main (){
     int arr [10] ={ 1,2,3,4,5,6,7,8,9,10};
     int err[5] ={11,22,33,44,55};
     reverse(arr, 10);
     reverse (err, 5);
      printarr(arr,10);
      printarr( err,5);
    
 
return 0;
}
