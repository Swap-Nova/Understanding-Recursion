#include<iostream>
#include<stdio.h>

using namespace std;

void fun(int n){
    if(n>0){
        printf("%d \n",n);
        fun(n-1);
        fun(n-1); 
    }
} 

int main(){
    fun(3);
    return 0;
}