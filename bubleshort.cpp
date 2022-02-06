#include<iostream>
using namespace std;
 void swap ( int *xp, int *yp){
     int temp =  *xp;
      *xp =  *yp;
      *yp =  temp;
 }
  void bubblesort(int arr[], int size ){
      for (int  i = 1; i < size; i++)
      {
          for (int  j= 0; j < size-1; j++)
          {
            if (arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
            
          }
          
      }
      
  }
 void  printarr(int arr[], int size )
{
    for (int  i = 0; i < size ; i++)
    {
         cout<<arr[i]<<"  ";
         cout<<endl;
    }
    
}
int main(){
int arr[6] ={ 9,1,4,5,3,8};
 cout<<" enter the number : "<<endl;
 int n;
 cin>>n;
 bubblesort(arr, n);
 cout<<"answer is : "<<endl;
 printarr(arr,n);
return 0;
}
