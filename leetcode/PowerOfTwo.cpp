#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag = true;
    while(n!=1){
        int temp = n%2;
        if(temp == 1){
            flag = false;  
            break;
        }
        n = n/2;
    }
    
    if(flag)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}