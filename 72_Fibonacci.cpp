#include<stdio.h>
#include<iostream>

using namespace std;

int fib(int n){
    int sum=0; // initialize sum
    int t0=0,t1=1; // the starting two terms are 0 and 1
    if(n<=1){
        return n;
    }
    for(int i=2;i<=n;i++){
        sum=t0+t1;
        t0=t1;
        t1=sum;
    }
    return sum;
}

// using recursive function
int rfib(int p){
    if(p<=1){
        return p;
    }
    else{
        return rfib(p-2)+rfib(p-1);
    }
}

// to avoid excessive recursion- memoization
int F[10]; // global array to store excessive recursive calls
int mfib(int x){
    if(x<=1){
        F[x]=x;
        return x;
    }
    else{
        if(F[x-2]==-1)
            F[x-2]=mfib(x-2);
        if(F[x-1]==-1)
            F[x-1]=mfib(x-1);
        return F[x-2]+F[x-1];
    }
}

int main(){
    int r=fib(10);
    cout<<r<<endl;

    int q=rfib(8);
    cout<<q<<endl;

    // calling global array
    for(int i=0; i<10; i++){
        F[i]=-1; // array initialization with -1 because 0 can be fibonacci. So use a term that is not fibonacci
    }
    cout<<mfib(6)<<endl;

    return 0;

}