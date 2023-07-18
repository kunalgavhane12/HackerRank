/******************************************************************************
Pointer
*******************************************************************************/
#include <stdio.h>
#include<iostream>
using namespace std;

void update(int *a,int *b) {
    // Complete this function    
    int sum,sub;
    sum = *a + *b;
    
    if(*a>*b)
    sub= *a - *b;
    else
    sub=*b-*a;
    
    *a=sum;
    *b=sub;
}

int main(){
    int a, b;
    int *pa = &a, *pb = &b;
   
    cin >> a >> b;
    update(pa, pb);
   
    cout << a << endl;
    cout << b << endl;

    return 0;
}
