#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[100];
    cin>>str;
    int len = strlen(str);
    for(int i=0; i<len; i++){
        // Uppercase to Lowercase convert
        if(str[i]>=65 && str[i] <=92){
            str[i]=str[i]+32;
        }
        // Removing vowels
        if(str[i]== 'a' ||str[i]== 'e' ||str[i]== 'i' ||str[i]== 'o' ||str[i]== 'u'|| str[i]=='y'
        ||str[i]== 'A' ||str[i]== 'E' ||str[i]== 'I' ||str[i]== 'O' ||str[i]== 'U'|| str[i]=='Y'){
            for(int j=i; j<len; j++){
                str[j] = str[j+1];
            }
            i--;
            len--;
          }
    }
    for(int i=0;i<len; i++){
        cout<<"."<<str[i];
    }

    return 0;
}
