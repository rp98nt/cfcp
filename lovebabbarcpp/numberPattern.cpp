//1 2 3
//2 3 4
//3 4 5
//for n=3;

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<i+j+1<<"  ";
        }
        cout<<endl;
    }
    return 0;
}