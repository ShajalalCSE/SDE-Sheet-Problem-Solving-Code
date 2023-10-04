#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll nCr(int n,int r){


    ll nominator=1,denomanator =1;

    for(int i=0;i<r;i++){
        nominator*=(n-i);
        denomanator*=(i+1);

    }

    ll res= nominator/denomanator;

    return res;

}

int main(){

    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    long long ans=nCr(n,r);
    cout<<ans<<endl;

}