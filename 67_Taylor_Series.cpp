#include<iostream>
#include<stdio.h>

using namespace std;

double e(int x, int n){
    static double p=1, f=1;
    double r; // for storing the result
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main(){
    double t=e(1,10);
    cout<<t<<endl;

    return 0;
}