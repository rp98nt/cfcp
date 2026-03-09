#include<iostream>
#include<math.h>
#include<stack>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     stack<int> s;
//     while(n!=0){
//         int temp = n%2;
//         s.push(temp);
//         n = n/2;
//     }
//     stack<int> q;
//     while(s.size()!=0){
//         int temp = s.top();
//         s.pop();
//         if(temp == 1)
//             q.push(0);
//         else if(temp == 0)
//             q.push(1);
//     }
//     int temp = 0, x = 0;
//     while(q.size()!=0){
//         int flam = q.top();
//         if(flam)
//             temp += pow(2,x);
//         x++;
//         q.pop();
//     }
//     cout<<temp;
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     int m = n;
//     int mask = 0;
//     if(n == 0){
//         cout<<1;
//     } else {
//         while(m!=0){
//             mask = (mask<<1) | 1;
//             m = m>>1;
//         }
//         int ans = (~n) & mask;
//         cout<<ans;
//     }
//     return 0;
// }

int main(){
    int n;
    cin>>n;
    int mask = 0, m = n;
    if(n == 0)
        cout<<1;
    else{
        while(m!=0){
            mask = (mask<<1) | 1;
            m = m>>1;
        }
        cout<<((~n) & mask);
    }
    return 0;
}