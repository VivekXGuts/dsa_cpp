#include<iostream>
using namespace std;
int main(){
    int a[6]={3,5,7,9,11,13};
    int low=0, high=5, mid;
    int t=11;
   
    
    while(low<=high){
 mid=(low+high)/2;
        if(a[mid]==t){
            cout<<"Element found at index "<<mid;
            break;
        }
        else if(a[mid]<t){
            low=mid+1;
            
            
        }
        else{
            high=mid-1;
            
            
        }
        }
        if(low>high){
            cout<<"Element not found";
        }
    }
