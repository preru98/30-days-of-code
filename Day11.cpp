#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> arr(6);
    vector<int>sum_array(16);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    
    int count=0,p=0;
    for(int x=0;x<4;x++){
        for(int y=0;y<4;y++){
            for(int i=x;i<=x+2;i=i+2){
                for(int j=y;j<=y+2;j++){
                    count+=arr[i][j];
                }
            }
            sum_array[p]=count+arr[x+1][y+1];
            count=0;
            p++;
        }
    }
    cout<<*max_element(sum_array.begin(),sum_array.end());
    return 0;
}
