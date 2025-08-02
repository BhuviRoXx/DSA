#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {4,5,2,10,8};
    vector<int> temp = arr;
    unordered_map<int,int> map;
    sort(temp.begin(),temp.end());
    for(int i=0; i<temp.size(); i++){
        map[temp[i]]=i;
    }
    vector<int> res(arr.size(),-1);
    for(int i=0; i<arr.size(); i++){
        int index = map[arr[i]];
        if(index == arr.size()-1){
            res[i] = -1;
            continue;
        }
        res[i] = temp[index+1];
    }
    for(int i : res){
        cout<<i<<"\t";
    }

}