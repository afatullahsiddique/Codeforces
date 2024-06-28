#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n;

    cin>>n;

    int a,b;
    int max_capacity=0,capacity=0;
    for(int i=0; i<n; i++){
        cin>>a>>b;

        capacity = capacity - a+b;
        max_capacity = max(max_capacity,capacity);
    }

    cout<<max_capacity<<endl;

    return 0;
}
