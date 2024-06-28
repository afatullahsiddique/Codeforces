#include<iostream>
using namespace std;

int main(){
    int x,y,i;

    cin>>x>>y;

    for(i=1;; i++){
        x*=3;
        y*=2;
        if(x>y)break;
    }
    cout<<i<<endl;

    return 0;
}
