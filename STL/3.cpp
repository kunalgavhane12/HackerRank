/******************************************************************************
Lower Bound-STL
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
    int n,q,i,x;
    cin>>n;
    vector <int> v;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x;
        auto low = lower_bound(v.begin(),v.end(),x);
        if(v[low-v.begin()]==x)
        cout<<"Yes "<<low-v.begin()+1<<endl;
        else
        cout<<"No "<<low-v.begin()+1<<endl;
    }
    
    
    return 0;
}