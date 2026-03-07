//. . . 1
//. . 2 2
//. 3 3 3
//4 4 4 4
//for n = 4

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=n-i-1; j>0; j--){
            cout<<" "<<" ";
        }
        for(int j=i; j>=0; j--){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}