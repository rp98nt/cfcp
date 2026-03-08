#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x = 0, result = 0;

    while(n!=0){
        int temp = n % 10;
        if(temp)
            result += pow(2, x);
        x++;
        n = n / 10;
    }
    cout<<result;
    return 0;
}