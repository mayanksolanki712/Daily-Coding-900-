#include<iostream>
using namespace std;
int second_largest(int arr[], int n)
{
    int first=0,second=0, third=0,i;
    for(i=0;i<n;i++)
    if(arr[i]>first)
    {
        third=second;
        second=first;
        first=arr[i];
    }
     else if (arr[i]>second)
         {
             third=second;
             second=arr[i];
         }
         else if(arr[i]>third)
         {
             third=arr[i];

         }

cout<<"second largest element of array is "<<second;
}

int main()
{
    int arr[100],n,i;
    cout<<"enter the number of elemsnt in an array";
    cin>>n;
    cout<<"enter the elemnts of array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    second_largest(arr,n);


}
