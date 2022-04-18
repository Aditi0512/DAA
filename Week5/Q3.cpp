#include<iostream>
using namespace std;
void common(int a[],int a1[],int n,int m)
{int i=0,j=0;
while(i<n && j<m)
{if(a[i]<a1[j])
i++;
else if(a[i]>a1[j])
j++;
else
{cout<<a1[j]<<" ";
i++;
j++;
}
}
}
int main()
{int n,m;
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
cin>>m;
int a1[m];
for(int i=0;i<m;i++)cin>>a1[i];
common(a,a1,n,m);}
