#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int j;
    double e;
    string str;
    
    cin>>j>>e;
    getchar();
    getline(cin, str); 
    
    cout<<i+j;
    cout<<endl;
    cout<<fixed<<setprecision(1)<<e+d;
    cout<<endl;
    cout<<s+str;

    return 0;
}