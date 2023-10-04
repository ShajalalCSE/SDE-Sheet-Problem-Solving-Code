#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


//it is print for one value of nth row and rth col;
ll nCr(int n, int r){

    int res=1;
    for(int i=0;i<r;i++){
        res*=(n-i);
        res=res/(i+1);
    }

    return res;

}

// printing full pascal triangel using only row number.

vector<int> pascal( int row ){

    int res=1;
    vector<int >ansRow;
    ansRow.push_back(res);
    for(int col=1;col<row;col++){
        res*=(row-col);
        res=res/col;

        ansRow.push_back(res);
    }

    return ansRow;


}


int main(){

    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    ll ans=nCr(n,r);
    cout<<ans<<endl;

    // printing full pascal triangel using only row number.



}

