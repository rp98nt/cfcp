#include<iostream>
#include<map>
#include<set>
#include<vector>
using namespace std;

bool uniqueNumberOfOccurrences(vector<int> v){
    map<int, int> m;
    for(auto x : v)
        m[x]++;
    set<int> s;
    for(auto x: m){
        s.insert(x.second);
    }
    return s.size() == m.size();
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
    cout<<uniqueNumberOfOccurrences;
    return 0;
}