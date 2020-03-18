#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;

    if(x%2!=0){
        cout<<"Weird";
    }
    else{
        if(x>=2&&x<=5){
            cout<<"Not Weird";
        }
        else if(x>=6 && x<=20){
            cout<<"Weird";
        }
        else if(x>20){
            cout<<"Not Weird";
        }
    }
}
