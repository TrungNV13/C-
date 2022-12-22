#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv){
    int n;
    cin>>n;
    int a[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3;j++){
            cin>>a[i][j];
        }
    }
    int temp=0;
    for(int i=0; i<n; i++){
        int dem1=0;
        int dem0=0;
        for(int j=0; j<3;j++){
            if(a[i][j]==1) dem1++;
            else dem0++;
        }
        if(dem1>dem0) temp++;
    }
    cout<<temp<<endl;
}