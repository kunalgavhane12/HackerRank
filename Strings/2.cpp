/******************************************************************************
StringStream
*******************************************************************************/
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> parseInt(string str)
{
    //Complete this function
    stringstream ss(str);
    char ch;
    vector<int>a;
    int temp;
    while(ss>>temp)
    {
        a.push_back(temp);
        ss>>ch;
    }
    return a;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers= parseInt(str);
    for(int i=0;i<integers.size();i++)
    cout<<integers[i]<<"\n";
    
    return 0;
}