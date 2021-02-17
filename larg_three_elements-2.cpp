#include<iostream>
using namespace std;
int largest_three(int arr[],int n)
{
    int i;
    int first=0 ,second=0, third=0;
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
         cout<<" largest element are "<<first<<second<<third;
} 

int main()
 {
     int arr[100],n,i;
     cout<<"enter the number of elemnts in an array";
     cin>>n;
     cout<<"enter the elements in a array ";
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
    largest_three(arr,n);
     
 }