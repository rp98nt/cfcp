//D
//C D
//B C D
//A B C D
//for n = 4

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char x = 'A'+n-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<char(x-i+j)<<"  ";
        }
        cout<<endl;
    }
    return 0;
}