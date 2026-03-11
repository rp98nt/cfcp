#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> findAllDuplicate(vector<int> v){
    map<int, int> m;
    for(auto x:v)
        m[x]++;
    vector<int> result;
    for(auto x:m)
        if(x.second > 1)
            result.push_back(x.first);
    return result;
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
    vector<int> result = findAllDuplicate(v);
    for(auto x : result)
        cout<<x<<" ";
    return 0;
}