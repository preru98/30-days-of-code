#include<iostream>
using namespace std;

int main(){
    int x;
    string a="Weird";
    string b="Not Weird";
    cin>>x;

    if(x%2==0 &&( x<=4 || x>20)){
        cout<<b;
    }
    else{
        cout<<a;
    }
    return 0;
}
