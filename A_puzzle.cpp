#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,m;

    cin>>n>>m;

    vector<int>puzzles(m);
    for(int i=0; i<m; i++){
        cin>>puzzles[i];
    }

    sort(puzzles.begin(),puzzles.end());

    int min_diff =puzzles[n-1] - puzzles[0];

    for(int i=0; i<=m-n; i++){
        int diff = puzzles[i+ n-1] - puzzles[i];
        min_diff = min(min_diff, diff);
    }
    cout<<min_diff<<endl;

    return 0;
}
