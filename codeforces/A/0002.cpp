// A. Winner
// time limit per test1 second
// memory limit per test64 megabytes
// The winner of the card game popular in Berland "Berlogging" is determined according to the following rules. If at the end of the game there is only one player with the maximum number of points, he is the winner. The situation becomes more difficult if the number of such players is more than one. During each round a player gains or loses a particular number of points. In the course of the game the number of points is registered in the line "name score", where name is a player's name, and score is the number of points gained in this round, which is an integer number. If score is negative, this means that the player has lost in the round. So, if two or more players have the maximum number of points (say, it equals to m) at the end of the game, than wins the one of them who scored at least m points first. Initially each player has 0 points. It's guaranteed that at the end of the game at least one player has a positive number of points.

// Input
// The first line contains an integer number n (1  ≤  n  ≤  1000), n is the number of rounds played. Then follow n lines, containing the information about the rounds in "name score" format in chronological order, where name is a string of lower-case Latin letters with the length from 1 to 32, and score is an integer number between -1000 and 1000, inclusive.

// Output
// Print the name of the winner.

// Examples
// Input
// 3
// mike 3
// andrew 5
// mike 2
// Output
// andrew
// Input
// 3
// andrew 3
// andrew 2
// mike 5
// Output
// andrew

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
using namespace std;

void winner(vector<pair<string, int>> vp){
    set<string> s;
    for(auto x : vp)
        s.insert(x.first);
    int maxScore = 0;
    for(auto x : s){
        string target = x;
        int temp = 0;
        for(int i=0; i<vp.size(); i++){
            if(vp[i].first == target){
                temp += vp[i].second;
            }
        }
        if(temp > maxScore)
            maxScore = temp;
    }
    string result;
    for(auto x: s){
        int leastI = vp.size();
        cout<<"Enter Here"<<endl;
        string target = x;
        int untillZero = maxScore;
        for(int i=0; i<vp.size(); i++){
            if(vp[i].first == target)
                untillZero -= vp[i].second;
            if(untillZero == 0)
                if(leastI < i)
                    result = x;
        }
    }
    cout<<maxScore<<endl;
    cout<<result;
}

int main(){
    int n;
    cin>>n;
    vector<pair<string, int>> vp;
    pair<string, int> p;
    while(n--){
        string tempString;
        int tempInt;
        cin>>tempString>>tempInt;
        p.first = tempString;
        p.second = tempInt;
        vp.push_back({p.first, p.second});
    }
    winner(vp);
    return 0;
}