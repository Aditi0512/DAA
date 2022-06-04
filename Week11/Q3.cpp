

#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(int arr[], int n, int sum)
{
    // Base Cases
    if (sum == 0)
        return true;
    if (n == 0 && sum != 0)
        return false;

    // If last element is greater than sum, then
    // ignore it
    if (arr[n - 1] > sum)
        return isSubsetSum(arr, n - 1, sum);

    /* else, check if sum can be obtained by any of
        the following
        (a) including the last element
        (b) excluding the last element
    */
    return isSubsetSum(arr, n - 1, sum)|| isSubsetSum(arr, n - 1, sum - arr[n - 1]);
}

bool findPartiion(int arr[], int n)
{
    // Calculate sum of the elements in array
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    // If sum is odd, there cannot be two subsets
    // with equal sum
    if (sum % 2 != 0)
        return false;

    // Find if there is subset with sum equal to
    // half of total sum
    return isSubsetSum(arr, n, sum / 2);
}


int main()
{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];

    if (findPartiion(arr, n) == true)
        cout << "yes";
    else
        cout << "no";
    return 0;
}
