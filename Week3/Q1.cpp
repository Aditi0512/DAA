#include<bits/stdc++.h>
using namespace std;
void insert_sort(int arr[],int n)
{int i,j,temp,comp=0,shift=0;
for(i=1;i<n;i++)
{
temp=arr[i];
j=i-1;
shift++;
while(j>=0 && temp<arr[j])
{arr[j+1]=arr[j];
j--;
comp++;
shift++;
}
arr[j+1]=temp;}
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
cout<<"Comaparison="<<comp<<" shifts ="<<shift<<endl;
cout<<endl;}
int main()
{int t;
cin>>t;
while(t--)
{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
insert_sort(arr,n);
}
return 0;}
