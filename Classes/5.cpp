/******************************************************************************
Inherited Code  
*******************************************************************************/
#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

/* Define the exception here */
class BadLengthException{
    int n;
    public:
    BadLengthException(int en)
    {
        n=en;
    }
    int what()
    {
        return n;
    }
};

bool checkUsername(string username)
{
    bool isvaild=true;
    int n = username.length();
    if(n<5)
    {
        throw BadLengthException(n);
    }
    for(int i=0;i<n-1;i++)
    {
        if(username[i] =='w' && username[i+1] == 'w')
        {
            isvaild=false;
        }
    }
    return isvaild;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string username;
        cin >>username;
        try{
            bool isvaild = checkUsername(username);
            if(isvaild)
            {
                cout<< "Valid" <<'\n';
            }
            else
            {
                cout<<"Invalid" <<'\n';
            }
        }
        catch(BadLengthException e)
        {
            cout<< "Too short: "<<e.what() <<'\n';
        }
    }
    return 0;
}