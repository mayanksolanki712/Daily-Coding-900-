#include<iostream>
using namespace std;

int bubblesort(int arr[],int n)
{
    int i,j,temp;
for(i=1;i<n;i++)
{
    for(j=0;j<n-i;j++)
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
}
        cout<<" kth largest element is : "<<arr[n-1];
}

int main()
{
    int arr[100],i,n;
    cout<<"enter the number of elements";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);

}