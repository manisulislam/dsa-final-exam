#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>>mp;
    while(n--){
        int x;
        cin>>x;
        mp.push(x);
    }
    int q;
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        if(a==0){
            int x;
            cin>>x;
            mp.push(x);
            cout<<mp.top()<<endl;
        }
        else if(a==1){
            if(!mp.empty()){
                cout<<mp.top()<<endl;
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
        else if (a == 2) {
            if (!mp.empty()) {
                mp.pop();
                if (!mp.empty()) {
                    cout << mp.top() << endl;
                } else {
                    cout << "Empty" << endl;
                }
            } else {
                cout << "Empty" << endl;
            }
        }
        else{
           break;
        }
    }
    return 0;
}