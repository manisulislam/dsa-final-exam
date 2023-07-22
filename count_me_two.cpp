#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        map<int, int>mp;
        
        int n;
        cin>>n;
        int value;
        int maxNumber= 0;
        int NumberMaxValue=INT_MIN;
        for(int i=0; i<n; i++){
            cin>>value;
            mp[value]++;
            if(mp[value]>maxNumber){
                maxNumber++;
                NumberMaxValue=value;

            }
            else if(mp[value]==maxNumber && NumberMaxValue<value){
                NumberMaxValue=value;
            }
        }
        
       
        cout<<NumberMaxValue<<" "<<maxNumber<<endl;
        
       


    }
    return 0;
}