#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;
void maxfreq(char a[],int n)
{int count[ASCII_SIZE]={0};
int max=0;
char res;
for(int i=0;i<n;i++)
{count[a[i]]++;
if(max<count[a[i]])
{max=count[a[i]];
res=a[i];}
}
if(max<=1)cout<<"No duplicate found"<<endl;
else cout<<res<<"-"<<max<<endl;
}
int main()
{int t;
cin>>t;
while(t--)
{int n;
cin>>n;
char a[n];
for(int i=0;i<n;i++)
cin>>a[i];
maxfreq(a,n);
}}
