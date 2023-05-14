#include<iostream>
#include<stdio.h>

using namespace std;

// case-1:
int factorial(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        s=s*i;
    }
    return s;
}

// case-2:
int factorial_loop(int n){
    if(n==0){
        return 1;
    }
    else{
        return (n-1)*n;
    }
}

int main(){
    int p;
    p=factorial(5);
    int x;
    x=factorial(0);

    cout<<p<<endl;
    cout<<x<<endl;

    int q;
    q=factorial_loop(4);
    cout<<q<<endl;

    return 0;
}