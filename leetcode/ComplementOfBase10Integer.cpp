#include<iostream>
#include<math.h>
#include<stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int> s;
    while(n!=0){
        int temp = n%2;
        s.push(temp);
        n = n/2;
    }
    stack<int> q;
    while(s.size()!=0){
        int temp = s.top();
        s.pop();
        if(temp == 1)
            q.push(0);
        else if(temp == 0)
            q.push(1);
    }
    int temp = 0, x = 0;
    while(q.size()!=0){
        int flam = q.top();
        if(flam)
            temp += pow(2,x);
        x++;
        q.pop();
    }
    cout<<temp;
    return 0;
}