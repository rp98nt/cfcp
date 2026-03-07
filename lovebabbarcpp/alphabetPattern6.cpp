//A
//B C
//C D E
//D E F G
//for n=4

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char x = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<char(x+i+j)<<"  ";
        }
        cout<<endl;
    }
    return 0;
}