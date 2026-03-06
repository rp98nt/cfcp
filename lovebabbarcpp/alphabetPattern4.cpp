//A B C
//B C D
//C D E
//for n = 3

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char x = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<char(x+i+j)<<"  ";
        }
        cout<<endl;
    }
    return 0;
}