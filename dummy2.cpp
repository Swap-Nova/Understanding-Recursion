#include<iostream>
#include<stdio.h>
using namespace std;

void foo (int n, int sum){
    int k = 0, j = 0;
    if (n==0) return;
    k = n % 10;
    j = n/10;
    sum = sum + k;
    foo (j, sum);
    cout<<k;
}

int main()
{
    int a = 2048, sum = 0;
    foo (a, sum);
    // before itself the output we have received 2048
    cout<<sum<<endl;
}