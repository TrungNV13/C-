#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream fp;
    ofstream fp2;   
    fp.open("PTIT.in");
    fp2.open("PTIT.out");
    while(!fp.eof()){
        string s;
        getline(fp,s);
        fp2<<s<<endl;
    }
    fp.close();
    fp2.close();

}