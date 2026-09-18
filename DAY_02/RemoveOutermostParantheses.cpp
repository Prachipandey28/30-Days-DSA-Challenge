//leetcode 1021


// Input: s = "(()())(())(()(()))"
// Output: "()()()()(())"
// Explanation: 
// The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
// After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".

#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    string temp="";
    int open=0;
    for(char ch:s){
        if(ch=='('){
            if(open>0){
                temp+=ch;
            }
            open++;
        }
        else{
            open--;
            if(open>0){
                temp+=ch;
            }
        }
    }
    cout<<temp;
}