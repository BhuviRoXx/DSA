#include<iostream>
using namespace std;
int diagonalSum(int grid[10][10]){
    int sum=0;
    for(int i=0; i<10; i++){
        sum+=grid[i][i];
    }
    return sum;
}
int main(){
    int grid[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 0},
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 0},
        {3, 4, 5, 6, 7, 8, 9, 6, 4, 0},
        {2, 3, 4, 5, 6, 7, 8, 9, 3, 2},
        {3, 4, 5, 6, 7, 4, 3, 2, 1, 3},
        {3, 4, 5, 6, 2, 4, 4, 2, 4, 6},
        {2, 3, 4, 6, 2, 4, 6, 2, 3, 5},
        {2, 3, 5, 6, 2, 4, 6, 2, 3, 5},
        {2, 4, 6, 2, 1, 4, 3, 3, 5, 2},
        {3, 3, 5, 2, 4, 6, 2, 1, 4, 6}
    };
    int dsum = diagonalSum(grid);
    cout<<dsum;
}