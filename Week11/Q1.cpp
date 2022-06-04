#include<bits/stdc++.h>
using namespace std;

long matrixChainOrder(int *arr,int n)
{
    int p[n][n];
    int i,j,k,l,cost;

    for(i=1;i<n;i++)
    p[i][i]=0;

    for(l=2;l<n;l++)
    {
        for(i=1;i<n-l+1;i++)
        {
            j=i+l-1;
            p[i][j]=INT_MAX;

            for(k=i;k<=j-1;k++)
            {
                cost=p[i][k]+p[k+1][j]+arr[i-1]*arr[k]*arr[j];
                if(cost<p[i][j])
                p[i][j]=cost;
            }
        }
    }
    return p[1][n-1];
}

int main()
{
    int n;
    cin>>n;

    int arr[n+1];
    for(int i=0;i<n;i++)
    cin>>arr[i]>>arr[i+1];


    cout<<matrixChainOrder(arr,n+1);
    return 0;
}
