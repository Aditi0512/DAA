#include<bits/stdc++.h>
using namespace std;
int main()
{int T;
cin>>T;
while(T--)
{int n,i;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{cin>>arr[i];}
int key,count=0;
cin>>key;
sort(arr,arr+n);
for(i=0;i<n;i++)
{int s=i;
int l=n-1;
while(s<l)
{if(arr[l]-arr[s]==key)
{count++;
s++;
l--;}
else if(arr[l]-arr[s]>key)l--;
else s++;
}
}
cout<<count<<endl;

}
return 0;}
