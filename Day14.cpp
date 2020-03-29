#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	Difference(vector<int> elements){
        this->elements=elements;
    }
    void computeDifference(){
        int dif=-1;
        maximumDifference=-1;
        for(int i=0;i<elements.size()-1;i++){
            for(int j=i+1;j<elements.size();j++){
                dif=abs(elements[i]-elements[j]);
                if(dif>maximumDifference){
                maximumDifference=dif;
                }
            } 
        }
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}