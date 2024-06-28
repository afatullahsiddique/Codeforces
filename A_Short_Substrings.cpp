#include<iostream>
#include<string>
#include<vector>
using namespace std;

string guessString(const string& text){
    string text2;
    for(int i=0; i<text.size(); i+=2){
        text2.push_back(text[i]);

        if(i+1<text.size())
            text2.push_back(text[i+1]);
    }
    return 0;
}

int main(){
    int t;

    cin>>t;
    while(t--){
        string text;
        cin>>text;
        cout<<guessString(text)<<endl;
    }

    return 0;
}
