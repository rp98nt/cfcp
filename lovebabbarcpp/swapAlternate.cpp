#include<iostream>
#include<vector>
using namespace std;

vector<int> swapAlternate(vector<int> &v){
    int temp;
    for(int i=1; i<v.size(); i = i+2){
        int temp = v[i-1];
        v[i-1] = v[i];
        v[i] = temp;
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    int m = n;
    while(n--){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    vector<int> result = swapAlternate(v);
    for(int i=0; i<m; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}