
#include<iostream>
using namespace std;
// print like a wave 
//  print a index in wave form 
int  wave(int arr[][3],int rowsi,int colsi){
    for (int col  = 0; col< colsi; col++)
    {  //  for a odd column  going bottom to top
        if (col&1)
        {
            for (int  row = rowsi-1; row >=0; row--)
            {
                cout<<arr[row][col]<<" ";
                // for a vector case
                //ans.push_back(arr[row][col]);
            }
            
        }
        //  for a even column  going top to bottom
        else
        {
            for (int  row = 0; row < rowsi; row++)
            {
               cout<<arr[row][col]<<" ";
            }
            
        }
    }
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


 int ansindx = wave(arr,3,3);
 cout<<"  wave element is : "<<ansindx;

return 0;

}
