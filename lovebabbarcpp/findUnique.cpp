// Array size - 2M+1, M have duplicate and 1 unique. find the unique.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findUniqueWithSorting(vector<int> v){
    // using sorting.
    int temp;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        if(v[i] == v[i+1])
            i++;
        else
            temp = v[i];
    }
    return temp;
}

int findUniqueWithoutSorting(vector<int> v){
    // without sorting.
    while(v.size()!=1){
        int target = v[0];
        for(int j=1; j<v.size(); j++){
            if(target == v[j]){
                v.erase(v.begin()+j);
                v.erase(v.begin());
                break;
            }
        }
    }
    return v[0];
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
    cout<<"Unique element Without sorting - "<<findUniqueWithoutSorting(v)<<endl;
    cout<<"Unique element with sorting - "<<findUniqueWithSorting(v);
    return 0;
}