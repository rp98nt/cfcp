//A
//B B
//C C C
//for n=3;

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char x = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<char(x+i)<<"  ";
        }
        cout<<endl;
    }
    return 0;
}