#include<iostream>
using namespace std;

 int binaryserch(int arr[], int key ,int n){
      int start =  0;
      int end=  n-1;
      int mid =  start+(end-start)/2;
      while (start<=end)
      {
          if (arr[mid]==key)
          {
             return mid; 
          }
          if (key>arr[mid])
          {
             start = mid +1;
          }
          else
          {
              end =  mid -1;
          }
           mid =  start+(end-start)/2;
      }
      return-1;
 }
 int main(){
     int num[5]={2,4,6,8,10};
      int index = binaryserch(num,8,5);
      cout<<"the element 8 is index : "<<index<<endl;

return 0;
}
