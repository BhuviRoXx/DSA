// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int f(int arr[], int i, int dp[]){
    
    if(dp[i] != -1) return dp[i];
    
    if(i==0) return arr[0];
    if(i==-1) return 0;
    
    int pick = arr[i]+f(arr, i-2, dp);
    int notPick  = 0+f(arr, i-1, dp);
    
    return dp[i] = max(pick, notPick);
}

int main() {
    int dp[4] = {-1,-1,-1,-1};
    int arr[4] = {2,1,4,9};
    cout<<f(arr, 3, dp);
}