#include<iostream>
using namespace std;

int main(){
    int t;
    int x,y,z;
    cin>>t;

    while(t--){
        cin>>x>>y>>z;

        int sum = x+z;
        int sub = x-z;

        if((x+z)==y || (x-z)==y || (z-x)==y){
            cout<<"YES"<<endl;
        }else if(x-z != y){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
