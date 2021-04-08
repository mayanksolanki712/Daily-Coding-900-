#include<iostream>
using namespace std;

int frequency(int arr[], int n)
{
    int i,j, max_count=1;
for(i=0;i<n;i++)
{
    int count=1;
    for(j=i+1;j<n;j++)
    {
    if (arr[i]==arr[j])
        {
           count++;
         }
    } 
    if(count > max_count)
    {
        max_count=count;  
    }
}


    for(i=0;i<n;i++)
{
    int count=1;
    for(j=i+1;j<n;j++)
    {
    if (arr[i]==arr[j])
        {
           count++;
         }
    } 
    if(count==max_count)
    {
        cout<<arr[i]<<"\n";  
    }
         
}
 
}

int main()
{
   int n,i,arr[100];
cout<<" enter the number of elemsnts";
cin>>n;
cout<<" enter the elemnsts";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
    frequency(arr,n);
}