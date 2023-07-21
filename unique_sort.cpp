#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        set<int, greater<int>>mp;
        int n;
        cin>>n;
        for( int i=0; i<n; i++){
            int x;
            cin>>x;
            mp.insert(x);
        }
        
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}