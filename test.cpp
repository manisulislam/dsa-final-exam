#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
     string name;
     int roll; 
     int marks;
     Student(string name, int roll, int marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
     }
};
class cmp{
    public:
     bool operator()(Student a, Student b){
        if(a.marks == b.marks){
            return a.roll > b.roll;
        }
        return a.marks<b.marks;
     }
};
int main(){
    int n;
    cin>>n;
    priority_queue<Student, vector<Student>, cmp>pq;
    for(int i=0; i<n; i++){
        string name;
        int roll, marks;
        cin>>name;
        cin>>roll>>marks;
        Student obj(name, roll, marks);
        pq.push(obj);

    }
        
    
    int q;
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        if(pq.empty()){
            cout<<"Empty"<<endl;
        }
        else if(a==0){
        string name;
        int roll, marks;
        cin>>name;
        cin>>roll>>marks;
        Student obj(name, roll, marks);
        pq.push(obj);
        
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<" "<< endl;
        }
        else if(a==1){
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<" "<< endl;
        }
        else if(a==2){
          
                pq.pop();
                if(!pq.empty()){
                 cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<" "<< endl;
                 }
                 else {
                    cout<<"Empty"<<endl;
                 }

        }
        else{
            break;
        }
    }
    return 0;
}