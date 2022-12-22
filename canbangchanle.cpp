#include <bits/stdc++.h>
using namespace std;
bool can_bang(long long n){
    int check_chan=0;
    int check_le=0;
    while(n>0){
        if((n%10)%2==0) ++check_chan;    
        else ++check_le;
        n/=10;
    }
    if(check_le==check_chan) return true;
    else return false;
}
int main(int argc, char **argv){
    long long n ;
    cin>>n;
    long long a=pow(10,n-1);
    long long b=pow(10,n);
    int dem=0;
    for(long long i=a;i<b;i++){
        if(can_bang(i)==true){
            cout<<i<<" ";
            dem++;
        }
        if(dem==10){
            cout<<endl;
            dem=0;
        }
    }
}