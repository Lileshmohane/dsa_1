//  book allocate  in given arr of min book  atlist one book allocate both student 
#include<iostream>
using namespace std;
bool isposi(int arr[],int n,int m,int mid){
    int stu= 1;
    int page = 0;
    for (int  i = 0; i < n; i++)
    {
       if (page + arr[i]<=mid)
       {
           page += arr[i];
       }
       else
       {
        stu ++;
        if (stu>m||arr[i]>mid )
        {
            return false;
        }
        page  = arr[i];
       }
       
       
    }
    return  true;
}
int findpage(int arr[], int n, int m){
int sum = 0;
int st= 0;
if (n<m)
{
    return -1;
}
for (int  i = 0; i < n; i++)
{
    sum  +=arr[i];
}
int e = sum;
int ans =-1;
int mid = st+(e-st)/2;
while (st<=e)
{
    if (isposi(arr,n,m,mid))
    {
       ans  =mid;
       e= mid-1;
    }
    else
    {
        st= mid+1;
    }
    mid =  st+(e-st)/2;
}
return ans ;
}
int main(){
    
int arr[] = { 10,20,30,40 };
int n=  sizeof arr /sizeof arr[0];
int m = 2;
cout<<" your page is : "<< findpage(arr,n,m)<<endl;
return 0;
}
