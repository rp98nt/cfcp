//1 2 3 4
//  2 3 4
//    3 4
//      4
//for n = 4

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" "<<" ";
        }
        for(int j=n; j>0; j--){
            if(n-j < i)
                continue;
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}