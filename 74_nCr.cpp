#include<stdio.h>
#include<iostream>

using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}

int combination(int n,int r){
    int numerator, denominator;
    numerator=fact(n);
    denominator=fact(r)*fact(n-r);

    return numerator/denominator;
}

// using a recursive function
int combination_2(int n,int r){
    if(n==r || r==0){
        return 1;
    }
    else{
        return combination_2(n-1,r-1)+combination_2(n-1,r);
    }
}

int main(){
    int x=combination(3,2);
    cout<<x<<endl;

    int y=combination_2(5,3);
    cout<<y<<endl;

    return 0;
}