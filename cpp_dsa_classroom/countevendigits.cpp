#include<iostream>
using namespace std;
int main(){
    int arr[5]={23,345,2345,12,3};
    int count=0;
    for(int i=0;i<5;i++){
        if (9<arr[i]&&arr[i]<100||999<arr[i]&&arr[i]<10000||arr[i]==100000){
            count++;
        }
        
    }
    cout<<count;
}