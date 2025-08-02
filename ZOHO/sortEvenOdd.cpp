#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {3,4,5,1,2};
    vector<int> e,o;
    for(int i : arr){
        if(i%2==0) e.push_back(i);
        else o.push_back(i);
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end(), greater<int>());
    int ei=0;
    int oi=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2 == 0){
            arr[i] = e[ei++];
        }
        else{
            arr[i] = o[oi++];
        }
    }
    for(int i : arr){
        cout<<i<<"\t";
    }
}