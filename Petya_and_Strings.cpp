#include<iostream>
#include<algorithm>
using namespace std;

    int lexicographically(string s1, string s2){
        transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
        transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
        return s1.compare(s2);
    }

int main(){
    string s1,s2;

    cin>>s1>>s2;

    int result = lexicographically(s1,s2);

    if(result > 0){
        cout<<"1"<<endl;
    }else if(result < 0){
        cout<<"-1"<<endl;
    }else{
        cout<<"0"<<endl;
    }

    return 0;
}
