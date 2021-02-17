#include<iostream>
using namespace std;
int largest_array (int arr[100],int n)
{
int max=arr[0];
int i;
for(i=1;i<n;i++)
   if(arr[i]>max)
    {
        max=arr[i];
    }
    return max;

}


int main()
{
    int arr[100],i,n,max;
    cout<<"enter the number of elements ";
    cin>>n;
    cout<<"enter the elements of the array ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the largest element is "<<largest_array(arr,n);

}

