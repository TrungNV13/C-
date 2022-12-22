#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; string s[100];
    cin.ignore();
    ofstream fp1;
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    fp1.open("A.txt");
    for(int i=0;i<n;i++){
        fp1<< s[i];
    }
    fp1.close();
}