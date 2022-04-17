#include<bits/stdc++.h>
using namespace std;
void findpair(int a[],int n,int key)
{
sort(a,a+n);
int p=0;
int r=n-1;
while(p<r)
{if(a[p]+a[r]==key)
{
cout<<a[p]<<" "<<a[r]<<endl;
return;
}
a[p]+a[r]<key?p++:r--;
}
cout<<"No such Element Exist";}
int main()
{int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
int key;
cin>>key;
findpair(a,n,key);
}
}
