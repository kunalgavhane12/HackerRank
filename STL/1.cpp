/******************************************************************************
Vector-Sort
*******************************************************************************/
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,x;
    cin>>n;
    vector<int>arr;
    for(i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    for(i=0;i<arr.size();i++)
    cout<<arr[i]<<' ';
    return 0;
}