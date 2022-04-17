#include<iostream>
#include<cstdlib>
using namespace std;

void swap(int* a,int* b)
{
    int t=*a;
    *a=*b;
    *b=t;

}
int partition(int arr[],int p, int r)
{
    int x=arr[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(arr[j]<=x)
        {
            i++;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
int r_partition(int a[],int p,int r)
{int i=p+rand()%(r-p+1);
int temp;
temp=a[r];
a[r]=a[i];
a[i]=temp;
return partition(a,p,r);}
void quicksort(int arr[],int p,int r)
{int cp=0;
int n=r;
    if(p<r)
    {
        int q=r_partition(arr,p,r);
        quicksort(arr,p,q-1);
        quicksort(arr,q+1,r);

    }

   }
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    quicksort(arr,0,n-1);
     for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
    }

}
