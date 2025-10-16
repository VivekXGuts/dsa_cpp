#include<iostream>
using namespace std;
void number(int *n, int *x){
    
    *x=*x+10;
    *n=*n-1;
    cout<<*n<<" "<<*x;
}

int main(){
int n=19;
int x=20;
number(&n, &x);
}