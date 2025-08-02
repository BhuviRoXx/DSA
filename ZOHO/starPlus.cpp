#include<iostream>
using namespace std;
int main(){
    int mid = -1;
    string s = "ZOHO";
    int n = s.length();
    if(n%2 == 0){
        mid = n/2;//2
    }
    string s1 = "";
    int i=0;
     for (int i = 0; i < n; i++) {
        if (i == mid) {
            s1 += '*';
        }
        s1 += s[i];
    }
    cout<<s1<<endl<<endl;
    int m = s1.length();

    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(i==j){
                cout<<s1[i]<<"\t";
            }
            else if(i+j == m-1){
                cout<<s1[i]<<"\t";
            }
            else if(i==mid){
                cout<<s1[j]<<"\t";
            }
            else if(j==mid){
                cout<<s1[i]<<"\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }

}