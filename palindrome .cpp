#include <iostream>
using namespace std;


int main(){
    int num;
    cin>>num;
    int orig=num;
    
    int rev=0;
    while(num>0){
        int last =num%10;
        rev =rev*10+last;
        num=num/10;
    }
    if(orig==rev){
        cout<<"Palindrome_number";
        
    }
    else{
        cout<<"Not_palindrome";
    }
}


