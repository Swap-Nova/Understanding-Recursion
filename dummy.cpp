#include<iostream>
#include<stdio.h>

using namespace std;

int f(int n){
    static int i = 1;
    if (n>=5)return n;
    n = n+i;
    i++;
    return f(n);
}

int main(){
    int r=f(1);
    cout<<r<<endl;
}