#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s = "abcbbcabb";
    string regex = "cb*cab+";
    string match = "";
    int r_i=0;
    int i=0;
    bool matched = false;
    int slen = s.length();
    int rlen = regex.length()-1;
    char start = regex[r_i];
    while(i<slen){
        //
        if(s[i] == start){
            match+=s[i];
            matched = true;
            start = regex[++r_i];
        }
        //* and checking prev
        else if(i>0 && start == '*' && regex[r_i-1]== s[i]){
            match+=s[i];
        }
        //
        else if(i>0 && r_i<rlen && start == '*' && regex[r_i-1] != s[i]){
            start = regex[++r_i];
            i--;
        }
        //* and checking prev
        else if(i>0 && start == '+' && regex[r_i-1]== s[i]){
            match+=s[i];
        }
        //
        else if(i>0 && r_i<rlen && start == '+' && regex[r_i-1] != s[i]){
            start = regex[++r_i];
            i--;
        }
        else if(start != s[i] && matched && r_i<rlen && regex[r_i+1] != '*'){
            match = "";
            matched = false;
            r_i =0;
        }
        else if(start != s[i] && matched && regex[r_i+1] == '*'){
            r_i+=2;
            start = regex[r_i];
        }
        i++;
    }
    cout<<match;
}