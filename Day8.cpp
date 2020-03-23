/*

This solution is not employing any complex data structure, but follows standard method of storage 
and retrieval.Therefore it produces correct output but takes longer than required.This question must 
be solved using some data structure. Both the solution are given.One with maps( next commit ) and this one.

*/


#include <vector>
#include <iostream>
using namespace std;


int main() {
    int d_size;
    cin>>d_size;
    vector<string> names(d_size), numbers(d_size);
    string s;

    for(int i=0;i<d_size;i++){
        cin>>names[i];
        cin>>numbers[i];
    }

    while(cin>>s){
        int flag=1;
        for(int i=0;i<d_size;i++){
            if(names[i]==s){
                flag=0;
                cout<<names[i]<<"="<<numbers[i]<<"\n";
                break;
            }
        }
        if(flag){
            cout<<"Not found\n";
        }
    } 
    return 0;
}
