#include<iostream>
using namespace std;

// largest row sum  
void largrow(int arr[][3],int row,int col){
   
    for (int  row= 0; row< 3; row++)
{    int sum =0;
    for (int  col = 0; col < 3; col++)
    {
         sum+=arr[row][col];
       
        
    }
    cout<<sum<<" ";
  
}
cout<<endl;
}
//now we search a column wiise element 
int largesum(int arr[][3],int row,int col){
    int max=  INT8_MIN;
    int rowind= -1;
     for (int  row= 0; row< 3; row++)
{   
     
     int sum =0;
    for (int  col = 0; col < 3; col++)
    {
         sum+=arr[row][col];
    }
     if(sum>max){
          max=  sum;
          rowind =row;
        }
  
}
cout<<"  maximum index is :"<<max<<endl;
return rowind;
}
int main(){
int arr[3][3];
cout<<"  enter a element :"<<endl;
for (int  row= 0; row< 3; row++)
{
    for (int  col = 0; col < 3; col++)
    {
        cin>>arr[row][col];
    }
  
}

for (int  row= 0; row< 3; row++)
{
    for (int  col = 0; col < 3; col++)
    {
        cout<<arr[row][col]<<" ";
    }
  cout<<endl;  
}
cout<< "enter a element :"<<endl;

largrow(arr,3,3);
 int ansindx = largesum(arr,3,3);
 cout<<" your lage index is : "<<ansindx;

return 0;

}
