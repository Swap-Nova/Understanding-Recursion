#include<iostream>
#include<stdio.h>

using namespace std;

// have to declare function B earlier
void funB(int n);

void funA(int n){
    if(n>0)
    {    
        cout<<n<<endl;
        funB(n-1);  // this function will not be executed because funB is created later
    }
}

void funB(int n){
    if(n>1){
        cout<<n<<endl;
        funA(n/2);
    }
}

int main(){
    funA(20);
    // funB(3);

    return 0;
}