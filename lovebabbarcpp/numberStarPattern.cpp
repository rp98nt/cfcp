//1 2 3 4 5 5 4 3 2 1
//1 2 3 4 * * 4 3 2 1
//1 2 3 * * * * 3 2 1
//1 2 * * * * * * 2 1
//1 * * * * * * * * 1
// for n = 5

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=1; j<=n; j++){
            if(n-i>=j)
                cout<<j<<" ";
            else
                cout<<"*"<<" ";
        }
        for(int j=n; j>0; j--){
            if(n-i>=j)
                cout<<j<<" ";
            else
                cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}