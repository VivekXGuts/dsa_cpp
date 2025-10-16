#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[5]={22,134,23,3214,432};
    int count=0;
    for(int i=0;i<5;i++){
        int digits=floor(log10(arr[i])+1);
        if(digits%2==0){
            count++;
        }
    }
    cout<<count;
    return 0;
}