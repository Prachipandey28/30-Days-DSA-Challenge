//leetcode 344

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"] 

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
    return 0;
}