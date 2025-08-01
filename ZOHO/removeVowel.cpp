#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s = "CAAE";
    string s1 = "";
    for(char c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            continue;
        }
        else{
            s1+=c;
        }
    }
    cout<<s1;
}