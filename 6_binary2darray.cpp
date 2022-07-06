#include<iostream>
using namespace std;
// binar search  2d arraty

bool   binary (  int array[][3] ,int tar  ,int row,int col){
    int  st=  0;
    int end=  row*col-1;
    int mid=  st+(end-st)/2;
   
    while (st<=end)
    {
        int element = array[mid/col][mid%col];
        if (element   ==tar)
        {
           return 1 ;
        }
        if (element <tar)
        {
            st= mid+1;
        }
        else
        {
            end= mid-1;
        }
        mid=  st+(end-st)/2;
    }
    return 0;
}
int main(){
    
int array[3][3]{
        { 21, 22, 23 },
        { 37, 38, 39 },
        { 43, 44, 45 }
};
/*
cout<<"enter a element  :"<<endl;
 for (int  i= 0; i <3; i++)
{
   for (int  j= 0; j<3; j++)
   {
    cin>>[i][j];
   }
}
for (int  i = 0; i <3 ; i++)
{
   for (int j = 0; j <3; j++)
   {
     cout<<[i][j]<<"  ";
   }
  cout<<endl;
}*/
int n;
cin>>n;
bool ind= binary(array,n,3,3);
 if (ind)
 {
    cout<<"  your element is present :";
 }
 else
 {
    cout<<" your element  is not  present ";
 }
 

return 0;
}
