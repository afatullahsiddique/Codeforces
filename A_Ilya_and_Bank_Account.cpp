#include<iostream>
using namespace std;

int main(){
    int n;

    cin>>n;

    if(n>=0){
        cout<<n<<endl;
        return 0;
    }

    int max_num=0;
    n = -n;

        max_num = max(n/10, n/10 *10 + n%10);
        max_num = n/100;

        cout<<-max_num<<endl;

    return 0;
}
