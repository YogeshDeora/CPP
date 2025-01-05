#include <iostream>
using namespace std;

int reverse(){
    int num;
    cin>>num;
    int rev=0;
    while(num>0){
        int last=num%10;
        rev=rev*10+last;
        num=num/10;
    }
    return rev;
}

int main(){
    int ans=reverse();
    cout<<"Reversed number :"<<ans<<endl;
}