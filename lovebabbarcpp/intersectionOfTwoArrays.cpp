#include<iostream>
#include<map>
#include<vector>
using namespace std;

vector<int> intersectionOfTwoArrays(vector<int> v1, vector<int> v2){
    vector<int> result;
    map<int, int> m1, m2;
    for(auto x:v1)
        m1[x]++;
    for(auto x:v2)
        m2[x]++;
    for(auto x : m1)
        for(auto y : m2)
            if(x.first == y.first)
                for(int i=0; i<min(x.second, y.second); i++)
                    result.push_back(x.first);
    return result;
}

int main(){
    int num;
    cin>>num;
    while(num--){
        int n, m;
        cin>>n>>m;
        vector<int> v1;
        while(n--){
            int temp;
            cin>>temp;
            v1.push_back(temp);
        }
        vector<int> v2;
        while(m--){
            int temp;
            cin>>temp;
            v2.push_back(temp);
        }
        vector<int> result = intersectionOfTwoArrays(v1, v2);
        for(auto x:result)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}