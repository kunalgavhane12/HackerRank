/******************************************************************************
Strings
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    char c1,c2;
    cin>>a;
    cin>>b;
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;
    c1=a[0];
    c2=b[0];
    a[0]=c2;
    b[0]=c1;
    cout<<a<<" "<<b<<endl;
  
    return 0;
}

