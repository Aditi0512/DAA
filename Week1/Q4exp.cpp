#include <iostream>
using namespace std;
int binary_search(int arr[],int l,int h,int key)
{

    while(l<=h)
    {

        int mid=l+(h-l)/2;
       if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key)
            h=mid-1;
        else l=mid+1;
    }
    return -1;
}
int exponentialsearch(int arr[],int n,int key)
{if(arr[0]==key)
return 0;
int i=1;
while(i<n && arr[i]<=key)
{
i=i*2;}
return binary_search(arr,i/2,min(i,n),key);}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
           int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++) cin>>arr[i];
        int key;
        cin>>key;
       int exp=exponentialsearch(arr,size,key);
if(exp==-1)
    cout<<"Not Present"<<endl;
else
    cout<<"Present"<<endl;
    }

    return 0;}
