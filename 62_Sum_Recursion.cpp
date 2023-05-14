#include<iostream>
#include<stdio.h>

using namespace std;

// case-1: formula
int a_sum(int n){
    return n*(n+1)/2;
}

// case-2: using for loop
int b_sum(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s=s+i;
    }
    return s;
}

// case-3: if loop
int c_sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return c_sum(n-1)+n;
    }
}

int main(){
    int p;
    p=a_sum(5);

    int q;
    q=b_sum(5);
    
    int r;
    r=c_sum(5);

    cout<<p<<endl;
    cout<<r<<endl;
    cout<<r<<endl;

    return 0;
}