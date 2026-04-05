#include <iostream>
using namespace std;

void IsPalindrome(char word[],int n){
    int st=0,end=n-1;
    while(st<=end){
        if(word[st++]!=word[end--]){
            cout << "Not a palindrome" << endl;
            return;
        }
    }
    cout<<"Is a palindrome"<<endl;
}
int main() {
    char word [100];
    cin.getline(word,100);
    IsPalindrome(word,strlen(word));
  return 0;
}
