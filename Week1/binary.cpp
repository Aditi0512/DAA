include <iostream>

using namespace std;
void binary_search(int arr[],int l,int h,int key)
{
    int comp=0,flag=0;
    while(l<=h)
    {
         comp++;
        int mid=l+(h-l)/2;
       if(arr[mid]==key){
            flag=1;
            break;
        }
        else if(arr[mid]>key)
            h=mid-1;
        else l=mid+1;
    }
    if(flag)cout<<"Present "<<comp<<endl;
        else cout<<"Not Present"<<endl;
}
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
       binary_search(arr,0,size,key);
    }




    return 0;}
