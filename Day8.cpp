/*

The solution in the previous commit was simpler one but taking more than given time. This solution uses map.
Both the solution are given.One with maps( this one ) and simpler one in previous commit.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
#include<iterator>
#include<string>
using namespace std;


int main() {
    int d_size;
    cin>>d_size;
    map<string,string> ph_book;
    string name, number,s;
    // ph_book.insert({"ref", "fa"}); 
    for(int i=0;i<d_size;i++){
        cin>>name;
        cin>>number;
        ph_book.insert({name, number});
    }


    while(cin>>s){
        if(ph_book.find(s)!=ph_book.end()){
            cout<<ph_book.find(s)->first<<"="<<ph_book.find(s)->second<<"\n";
        }
        else{
            cout<<"Not found\n";
        }
    } 
    return 0;
}
