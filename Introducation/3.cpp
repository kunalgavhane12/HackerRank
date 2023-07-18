/******************************************************************************
Basic Data Types
*******************************************************************************/

#include <iostream>
#include <cstdio>
#include <iomanip> 
using namespace std;

int main() {
    // Complete the code.
    int a;
    int long b;
    char ch;
    float c;
    double d;
    cin >> a >> b >> ch >> c >> d;
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<ch<<endl;
    cout<<fixed<<setprecision(3)<<c<<endl;
    cout<<fixed<<setprecision(9)<<d<<endl;
    //printf("%d\n%ld\n%c\n%0.3f\n%0.9lf",a,b,ch,c,d);
    return 0;
}
