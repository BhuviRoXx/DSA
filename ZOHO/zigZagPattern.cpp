#include<iostream>
using namespace std;
int main(){
    int r=0;
    int c=1;
    int arr[3][3] = {
        {3,4,9},
        {2,5,8},
        {1,6,7}
    };
    int s = r < c ? 1 : 0;
        for(int i=c; i<3; i++){
            if(s==0){
                for(int j=2; j>=0; j--){
                    cout<<arr[j][i]<<"\t";
                }
                s=1;
            }
            else if(s==1){
                for(int j=0; j<3; j++){
                    cout<<arr[j][i]<<"\t";
                }
                s=0;
            }
        }
        s = r < c ? 1 : 0;
        for(int i=0; i<c; i++){
            if(s==0){
                for(int j=2; j>=0; j--){
                    cout<<arr[j][i]<<"\t";
                }
                s=1;
            }
            else if(s==1){
                for(int j=0; j<3; j++){
                    cout<<arr[j][i]<<"\t";
                }
                s=0;
            }
        }
        

}