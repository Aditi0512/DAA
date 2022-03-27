#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{int i,j,min=0,comp=0,swaps=0;
for(i=0;i<n-1;i++)
{min=i;
for(j=i+1;j<n;j++)
{comp++;
if(arr[min]>arr[j])
{
min=j;
}}
swap(arr[i],arr[min]);
swaps++;}
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
cout<<"Comparisons="<<comp<<endl;
cout<<"Swaps="<<swaps<<endl;}

int main()
{int t;
cin>>t;
while(t--)
{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
selection_sort(arr,n);}
return 0;}
