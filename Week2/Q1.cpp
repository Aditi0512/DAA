#include<bits/stdc++.h>
using namespace std;
void occ(int arr[],int l,int r,int key)
{int start=-1,end =-1,temp,count,mid,temp2;
bool flag =false;
while(l<=r)
{mid=l+(r-l)/2;
if(arr[mid]==key)
{temp=mid;
temp2=mid;
while(mid>0 && arr[mid]==key)mid--;
start=mid;
while(temp<r && arr[temp+1]==key)temp++;
end=temp;
flag =true;
count=end-start;
break;
}
else if(arr[mid]>key)r=mid-1;
else l=mid+1;
}
if(flag)
{cout<<endl<<arr[temp2]<<"-"<<count<<endl;}
else
cout<<"Key not present";
}
int main()
{int t;
cin>>t;
while(t--)
{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{cin>>arr[i];}
int key;
cin>>key;
occ(arr,0,n-1,key);
}
return 0;}
