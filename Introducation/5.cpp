/******************************************************************************
For Loop
*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    //Complete the code
    int a,b,i;
    string num[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin >> a >> b;
    for(i=a;i<=b;i++)
    {
        if(a>=1 && a<=9)
        {
            for(;a<=b;a++)
            {
                if(a<=9)
                cout<<num[a]<<endl;
                
                if(a>9)
                {
                    if(a%2==0)
                    cout<<"even"<<endl;
                    if(a%2==1)
                    cout<<"odd"<<endl;
                }
            }
        }
    }
    return 0;
}