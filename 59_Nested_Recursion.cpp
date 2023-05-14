#include<iostream>
#include<stdio.h>

using namespace std;

int fun(int n){
    if(n>100){
        return n-10;
    }
    else{
        return fun(fun(n+11));
    }
}

int main(){
    int r;
    r=fun(150); // whatever will value be less than 100 will return as 91

    cout<<r<<endl;
    return 0;
}