#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int> s;
    while(n!=0){
        s.push(n%2);
        n = n/2;
    }
    while(s.size()!=0){
        int x = s.top();
        cout<<x;
        s.pop();
    }
    return 0;
}