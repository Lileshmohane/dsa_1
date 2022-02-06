#include<iostream>
using namespace std;
 // inearsearch  using  a bool function 
  bool search(int arr[], int size, int key ){
      for (int  i = 0; i < size ; i++)
      {
           if (arr[i] == key)
           {
              return 1;
           }
           
      }
      return 0;
  }
  int main (){
      int arr[8] = { 2,4,5,7,9,56,67,45};
       cout<<" find a linear  searching element  "<<endl;
      int key;
      cin>>key;
      bool find =  search(arr, key, 45);
      if (find)
      {
         cout<<"your eliment is present in this array"<<endl;

      }
      else
      {
          cout<<"your element is not presemt in this array "<<endl;
      }
      
  

return 0;
}
