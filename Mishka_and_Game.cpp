#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int x=0;
    int y=0;

    while(t--){
        int a,b;
        cin>>a>>b;

        if(a>b){
            x++;
        }else if(a<b){
            y++;
        }
    }

    if(x==y){
        cout<<"Friendship is magic!^^"<<endl;
    }else if(x>y){
        cout<<"Mishka"<<endl;
    }else if(x<y){
        cout<<"Chris"<<endl;
    }

    return 0;
}
