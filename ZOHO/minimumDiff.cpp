#include<iostream>
#include<climits>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //{1 ,99 ,22 ,44 ,1001}
    //{55 ,44 ,33 ,22}
    vector<int> arr = {55 ,44 ,33 ,22};
    sort(arr.begin(),arr.end());
    //1 22 44 99 10001
    int minDiff = INT_MAX;
    unordered_map<int,vector<pair<int,int>>> map;
    for(int i=0; i<4-1 ;i++){
        int diff = abs(arr[i]-arr[i+1]);
        minDiff = min(minDiff, diff);
        map[diff].push_back({arr[i], arr[i+1]});
    }
    cout<<minDiff<<endl;
    vector<int> res;
    for(auto n : map[minDiff]){
        res.push_back(n.first);
        res.push_back(n.second);
    }

    sort(res.begin(),res.end());
    for(int i : res){
        cout<<i<<"\t";
    }

}