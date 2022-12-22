#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        stack<string> st;
        getline(cin,s);
        stringstream ss(s);
        string token;
        while(ss>>token ){
            st.push(token);
        }
        while( !st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}