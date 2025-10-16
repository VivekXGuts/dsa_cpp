#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,5,5,10,10};
    int five = 0;
    int ten = 0;
    for(int i=0;i<5;i++){
        if(arr[i]==5){
            five++;
        }
        else if(arr[i]==10){
            if(five>0){
                five--;
                ten++;
            }
            else{
                cout<<"false";
                break;
            }
        }
        else{
            if(ten>0&&five>0){
                ten--;
                five--;
            }
            else if(five>=3){
                five-=3;
            }


                
                
            else{
                    cout<<"false";
            
                    break;
                }
            }
        }
}
