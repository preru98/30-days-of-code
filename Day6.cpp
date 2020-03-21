#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void odd_even(string);
int main() {
    int test=0;
    string s;
    cin>>test;

    while(test){
        cin>>s;
        odd_even(s);
        cout<<endl;
        test--;
    }
    return 0;
}

void odd_even(string s){
    string odd="";
    
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            cout<<s[i];
        }
        else{
            odd+=s[i];
        }
    }

    cout<<" ";
    cout<<odd;
}
