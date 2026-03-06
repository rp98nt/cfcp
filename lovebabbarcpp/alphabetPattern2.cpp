//A B C
//A B C
//A B C
//for n=3;

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char x = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<char(x + j)<<"  ";
        }
        cout<<endl;
    }
    return 0;
}