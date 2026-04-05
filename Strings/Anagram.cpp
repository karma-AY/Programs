#include <iostream>
#include "string"
using namespace std;

void Anagram(string s1,string s2){
    if(s1.length()!=s2.length()){
        cout<<"Not a anagram.";
        return;
    }
    int alphabets[26] = {0};
    for(char c: s1){
        int idx = c-'a';
        alphabets[idx]++;
    }
    for(char c: s2){
        int idx = c - 'a';
        if(alphabets[idx]==0){
            cout<<"Not a anagram.";
            return;
        }
        alphabets[idx]--;
    }
    cout<<"Is anagram";
    return;
}
int main() {
    string s1,s2;
    cout<<"Enter s1:";
    cin>>s1;
    cout<<"Enter s2:";
    cin>>s2;
    Anagram(s1,s2);
  return 0;
}
