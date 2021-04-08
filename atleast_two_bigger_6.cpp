#include<iostream>
using namespace std;
 int bubblesort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        if (arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }   
}
 
 int printarray( int arr[], int n)
 {
     int i;
     cout<<" atleast 2 greatest element is ";
     for(i=0;i<n-2;i++)
     {
         cout<<arr[i];
     }
    

     
 }




int main()
{
    int n, arr[100], i;

    cout<<"enter the number of elemnts";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    printarray(arr,n);
}