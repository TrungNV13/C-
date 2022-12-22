#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int n;
    cin>>n;
    unsigned long long temp=1;
    unsigned long long sum=0;
    for(int i=1;i<=n;i++){
        temp*=i;
        sum+=temp;
    }
    cout<<sum;
}
