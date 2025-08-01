#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
void app(string temps, vector<string>& res){
    string temp = "";
    int n=-1;
    for(char c : temps){
        if(isdigit(c)){
            n = c - '0';
        }
        else{
            temp+=c;
        }
    }
    res[n] = temp;
}
int main(){
    string s = "is1 Thi0s T3est 2a";
    string temps = "";
    vector<string> mid_res;
    for(char c : s){
        if(c == ' '){
            mid_res.push_back(temps);
            temps="";
        }
        else{
            temps+=c;
        }
    }
    mid_res.push_back(temps);
    vector<string> res(mid_res.size());
    for(auto s : mid_res){
        app(s, res);
    }
    string res_s = "";
    for(auto s : res){
        s+=" ";
        res_s+=s ;
    }
    cout<<res_s;
    
}