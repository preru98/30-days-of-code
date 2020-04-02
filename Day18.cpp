#include <iostream>
#include<stack>
#include<queue>
using namespace std;


/*

Write your own Solution class for the implementation of the task.

*/

class Solution {
        queue<char>Q;
        stack<char>S;
    public:
        void pushCharacter(char ch){
            S.push(ch);
        }
        void enqueueCharacter(char ch){
            Q.push(ch);
        }
        char popCharacter(){
            char returnCharacter=S.top();
            S.pop();
            return returnCharacter;
        }
        char dequeueCharacter(){
            char returnCharacter=Q.front();
            Q.pop();
            return returnCharacter;
        }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
