#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int countup=0,countlow=0;

    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            countup++;
        }else{
            countlow++;
        }
    }

    string res;

    if(countup>countlow){
        for(int i=0; i<s.length(); i++){
            res = toupper(s[i]);
            cout<<res;
        }
    }else{
        for(int i=0; i<s.length(); i++){
            res = tolower(s[i]);
            cout<<res;
        }
    }

    return 0;
}
