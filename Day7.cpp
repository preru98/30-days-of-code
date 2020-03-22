#include<iostream>
#include<vector>

using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int> store(size);
    for(int i=0;i<store.size();i++) {
        cin>>store[i];
    }
    for(int i=store.size()-1;i>=0;i--){
        cout<<store[i]<<" ";
    }
    return 0;
}