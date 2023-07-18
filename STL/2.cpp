/******************************************************************************
Vector-Erase
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
    vector<int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int a,b;
    cin>>x>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1, v.begin()+b-1);
    cout<<v.size()<<'\n';
    
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    return 0;
}