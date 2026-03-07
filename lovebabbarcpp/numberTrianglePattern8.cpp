//. . . . 1
//. . . 1 2 1
//. . 1 2 3 2 1
//. 1 2 3 4 3 2 1
//1 2 3 4 5 4 3 2 1
//for n=5

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            cout<<" "<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<j+1<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<i-j<<" ";
        }
        cout<<endl;
    }
    return 0;
}