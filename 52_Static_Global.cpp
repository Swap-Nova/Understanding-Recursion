#include<iostream>
#include<stdio.h>

using namespace std;

// global variable-- the output remains same
int x;

int fun(int n)
{
    // static variable
    // static int x;
    
	if(n>0)
	{
        x++;
	    return fun(n-1)+x;
	}
	return 0;
}

int main(){
	// int a = 5;
    int r;

    r=fun(5);
	cout<<r<<endl;

    r=fun(5);
    cout<<r<<endl; // repeated again where x is taken 5 and then kept on adding 10 times
} 