#include<iostream>
using namespace std;
int smallest_array(int arr[], int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }
}
cout<<"smallest element is : "<<arr[0];
cout<<" second smallest is : "<<arr[1];
}

int main()
{
    int n,i,arr[100];
    cout<<"enter the number of elsemnts";
    cin>>n;
    cout<<"enter thye elsemnts";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    smallest_array(arr,n);
}