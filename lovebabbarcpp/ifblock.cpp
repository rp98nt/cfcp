// check if number input is +ve or -ve

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if((num&1) != 0){
        cout<<"odd";
    }
    else{
        cout<<"even";
    }
}