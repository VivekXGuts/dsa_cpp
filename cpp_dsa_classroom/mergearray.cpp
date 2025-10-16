#include<iostream>
using namespace std;
int main(){
    int a1[5]={1,3,5,7,9};
    int a2[3]={2,4,6};
    int a3[8];
    int i=0,j=0,k=0;
    while(i<5 && j<3){
        if(a1[i]<=a2[j]){
            a3[k]=a1[i];
            i++;
            k++;
        }
        else{
            a3[k]=a2[j];
            j++;
            k++;
        }
    }
    while(i<5){
        a3[k]=a1[i];
        i++;
        k++;
    }
    while(j<3){
        a3[k]=a2[j];
        j++;
        k++;

    }
    for(int l=0;l<8;l++){
        cout<<a3[l]<<" ";

    }
    
    
}