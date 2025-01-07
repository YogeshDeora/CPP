#include <iostream>
using namespace std;


int main(){
    int num;
    cin>>num;
    int orig =num;
        int sum=0;
        while(num>0){
            int last =num%10;
            sum=sum+(last*last*last);
            num=num/10;
        }
        if(orig==sum){
            cout<<"Armstrong Number";
        }
        else{
            cout<<"Not an Armstrong number";
        }
}


