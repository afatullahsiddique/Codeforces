#include<iostream>
using namespace std;

int main(){
    int k,n,w,sum=0,res;

    cin>>k>>n>>w;

    for(int i=1; i<=w; i++){
        sum+=i;
    }

    res = (sum*k)-n;

    if(res<0){
        cout<<0<<endl;
    }else{
        cout<<res<<endl;
    }

    return 0;
}
