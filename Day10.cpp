#include <bits/stdc++.h>
#include <iostream>
#include<iomanip>

int find_ones(int);
using namespace std;

int find_ones(int n){
    
    double expo=(double)log10(n)/log10(2);       //Exactly 1
    if(expo-(int)expo==0) 
        return 1;

    int count=1,num,large_count=1,power,new_power;
    power=log10(n)/log10(2);
    num=pow(2,power);
    num=n-num;
   
    while(num){
        new_power=log10(num)/log10(2);
        if(power-new_power==1){
            count++;
            if(large_count<count){
                large_count=count;
            }
        }
        else{
            count=1;
        }
        num=num-pow(2,new_power);
        power=new_power;
    }
    return large_count;
}

int main()
{
    int n;
    cin >> n;
    cout<<find_ones(n);
    return 0;
}
