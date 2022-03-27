#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int no;
cin>>no;
int c=0,flag=0;
for(int i=0;i<n;i++)
{c++;
if(no==arr[i])
{flag=1;
break;}
}
if(flag==1)
cout<<"Present "<<c<<endl;
else
cout<<"Not present "<<c<<endl;
}
return 0;}
