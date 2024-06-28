#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;

    vector<int>numbers;
    for(int i=0;i<s.size; i+=2){
        int num = s[i] - '0';
        numbers.push_back(num);
    }

    sort(numbers.begin(),numbers.end());

    for(int i=0; i<numbers.size(); i++){
        count,,numbers[i];
        if(i !=numbers.size() -1){
            cout<<"+";
        }
    }
    count<<endl;
    return 0;
    return 0;
}
