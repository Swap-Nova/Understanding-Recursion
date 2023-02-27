#include<stdio.h>
#include<iostream>

using namespace std;

void fun1(int n){
    if(n>0){
        fun1(n-1);
        printf("%d \n",n);
    }
}

// in the form of loop
void fun2(int n){
    int i=1;
    while(i<=n){
        printf("%d \n ",i);
        i++;
    }
}

int main(){
    fun1(3);
    printf("=============\n");
    fun2(3);
    return 0;
}