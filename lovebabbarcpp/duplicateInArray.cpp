#include<iostream>
#include<vector>
#include<map>
using namespace std;

int duplicateInArray(vector<int> v){
    map<int, int> m;
    for(int i=0; i<v.size(); i++){
        m[v[i]]++;
    }
    for(auto x:m)
        if(x.second == 2)
            return x.first;
    return -1;
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