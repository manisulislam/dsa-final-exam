#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
         string s;
    getline(cin, s);
    string word;
    stringstream  ss (s);
    map<string , int> pq;
     int maxFrequency=0;
     string maxWord="";
    while(ss>>word){
        pq[word]++;
        if(pq[word]>maxFrequency){
            maxFrequency=pq[word];
            maxWord=word;
        }
    }
   
    // for(auto it=pq.begin(); it!=pq.end(); it++){
    //     maxFrequency=max(maxFrequency, it->second);
    // }
    // for(auto it=pq.begin(); it!=pq.end(); it++){
    //     if(maxFrequency==it->second){
    //         cout<<it->first<<" "<<it->second;
    //     }
    // }
    cout<<maxWord<<" "<<maxFrequency;
    cout<<endl;
    }
   
    return 0;
}