#include<iostream>
using namespace std;

int reverse_array(int arr[],int n)
{
    int i;
    for(i=n-1;i>-1;i--)
    {
        cout<<arr[i];
    }
}

int main()
{
    int i,n,arr[100];
    cout<<"enter the number of integers";
    cin>>n;
    cout<<"enter the arrays values";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse_array(arr, n);
}