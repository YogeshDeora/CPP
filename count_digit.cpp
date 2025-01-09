#include <iostream>
using namespace std;

int count_digit(int num){
    int count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    return count;
}

int main(){
    int num;
    cin>>num;
    int ans=count_digit(num);
    cout<<ans<<endl;
}