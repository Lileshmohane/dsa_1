#include<iostream>
using namespace std;
 int getmax(int array[],int n){
  int maxi  ;
 
   for (int  i = 0; i < n; i++)
     {
       // if (array[i]>max)
       // {
     //       max=  array[i];
     //   }
      maxi = max(maxi,array[i]);
        
     }
      return maxi;
 }

int main(){
     int size ;
     cin>>size;
     int arr[100] ;
     for (int  i = 0; i <  size; i++)
     {
         cout<<"eliment is "<<arr[i]<<endl;
     }
     
      cout<< "  the max value is : "<<getmax( arr, size)<<endl;

 return 0;
}
