#include<iostream>
using namespace std;
typedef long long ll;

int main(){
     ll n,k; cin>>n>>k;

    ll result;
    ll a = n-n/2;

    if(a<k){
        k-=a;
        result = 2*k;
    }else{
        result = 2*k-1;
    }
    cout<<result<<endl;
    return 0;
}
