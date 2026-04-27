#include<iostream>
#include<vector>
using namespace std;

pair<int, int> answer(vector<int> v, int target){
    int low = -1, high = -1;
    for(int i=0; i<v.size(); i++){
        if(target == v[i]){
            low = i;
            break;
        }
    }
    for(int i=v.size()-1; i>=0; i--){
        if(target == v[i]){
            high = i;
            break;
        }
    }
    pair<int, int> result = make_pair(low, high);
    return result;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int size;
        cin>>size;
        vector<int> v;
        int target;
        cin>>target;
        int temp;
        while(size--){
            cin>>temp;
            v.push_back(temp);
        }
        pair<int, int> result = answer(v, target);
        cout<<result.first<<" & "<<result.second;
    }
    return 0;
}