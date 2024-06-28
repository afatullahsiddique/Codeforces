#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;

    cin>>n;
    vector<int>events(n);
    for(int i=0; i<n; i++){
        cin>>events[i];
    }

    int untreatedCrime=0;
    int availableOfficer=0;

    for(int i=0; i<n; i++){
        if(events[i]==-1){
            if(availableOfficer>0){
                availableOfficer--;
            }else{
                untreatedCrime++;
            }
        }else{
            availableOfficer+=events[i];
        }
    }
        cout<<untreatedCrime<<endl;

    return 0;
}
