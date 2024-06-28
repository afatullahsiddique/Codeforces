#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[100];
    int count=0;

    cin>>str;
    int len = strlen(str);
    for(int i=0; i<len; i++){
        if(str[i]==str[i+1]){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else
        cout<<"IGNORE HIM!"<<endl;

    cout<<count<<endl;

    return 0;
}


/*  Another way to wirite the code solve.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    int count=0;

    cin>>str;
    sort(str.begin(),str.end()); // sort the string A to Z using algorithm.
    for(int i=0; i<str.size(); i++){
        if(str[i]!=str[i+1]){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}
*/
