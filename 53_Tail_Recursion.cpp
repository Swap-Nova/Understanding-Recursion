#include<stdio.h>
#include<iostream>

using namespace std;

// tail recursive
void fun1(int n){
    if(n>0){
        printf("%d \n",n);
        fun1(n-1);
    }
}

// using loops
void fun2(int n){
    while(n>0){
        printf("%d \n",n);
        n--;
    }
}


int main(){
    fun1(3);
    printf("========== \n");
    fun2(3);
    return 0;
}