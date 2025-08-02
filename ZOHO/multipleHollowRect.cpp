#include<iostream>
using namespace std;
int main(){
    int n=4;
    int front = 0;
    int last = n*2-1;
    int arr[100][100];
    while(n!=0){
        for(int i=front; i<last; i++){
            for(int j=front; j<last; j++){
                if(i == front || i == last-1 || j == front || j == last-1){
                    arr[i][j]=n;
                }
            }
        }
        n--;
        front++;
        last--;
    }
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}