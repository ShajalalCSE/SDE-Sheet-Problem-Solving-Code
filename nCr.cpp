#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll nCr(int n, int r){

    int res=1;
    for(int i=0;i<r;i++){
        res*=(n-i);
        res=res/(i+1);
    }

    return res;

}


int main(){

    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    ll ans=nCr(n,r);
    cout<<ans<<endl;

}


// ll nCr(int n,int r){


    // ll nominator=1,denomanator =1;
    // for(int i=0;i<r;i++){
    //     nominator*=(n-i);
    //     denomanator*=(i+1);

    // }

    // ll res= nominator/denomanator;

    // return res;

//}