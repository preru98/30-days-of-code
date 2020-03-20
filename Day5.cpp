#include<iostream>
using namespace std;

int main(){
    int num,count=1;
    cin>>num;
    while(count<=10){
        cout<<num<<" x "<<count<<" = "<<num*count<<"\n";
        count++;
    }
    return 0;
}