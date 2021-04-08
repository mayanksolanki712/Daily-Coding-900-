#include<iostream>
using namespace std;

int next_greater(int arr[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(arr[i]<arr[j])
            {
               cout<<"Greater elemenst of "<<arr[i]<<":"<<arr[j]; 
            }
        }
    }

}





int main()
{
    int i,n,arr[100];
    cout<<"enter the no. of elements";
    cin>>n;
    cout<<"enter the elemnts";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    next_greater(arr,n);
}