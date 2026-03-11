/*
    You are given an array of size N containing each number between 1 and N-1 atleast once. There is a single integer value that is present in the array twice. Find it.
*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;

// int duplicateInArray(vector<int> v){
//     map<int, int> m;
//     for(int i=0; i<v.size(); i++){
//         m[v[i]]++;
//     }
//     for(auto x:m)
//         if(x.second == 2)
//             return x.first;
//     return -1;
// }

int duplicateInArray(vector<int> v){
    int ans = 0;
    for(auto x:v)
        ans = ans ^ x;
    for(int i=1; i<v.size(); i++)
        ans = ans ^ i;
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<duplicateInArray(v);
    return 0;
}