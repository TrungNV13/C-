#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double temp=0;
    for(int i=1;i<=n;i++){
        temp+=1.0/i;
    }
    cout<<fixed<<setprecision(4)<<temp;
}