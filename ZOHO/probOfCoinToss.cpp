#include<iostream>
#include<cmath>
using namespace std;
int fact(int n){
    int f = 1;
    for(int i=2; i<=n; i++){
        f*=i;
    }
    return f;
}
double probOfToss(int n, int r){
    double p = 0.5;
    int nf = fact(n);
    int rf = fact(r);
    int nrf = fact(n-r);
    double pnr = (nf/(nrf*rf))*(pow(p,n));
    return pnr;
}
int main(){
    // int n,r;
    // cout<<"enter N : "<<endl;
    // cin>>n;
    // cout<<"enter R" <<endl;
    // cin>>r;
    double prob = probOfToss(4, 3);
    cout << fixed;
    cout.precision(6);
    cout<<prob;
}

// n!/(n-r)!*r! * o.5^n