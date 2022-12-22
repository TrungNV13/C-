#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,m;
        cin>>a>>m;
        int count=0;
        for(int i=0;i<=m-1;i++){
            if((a*i)%m==1) {
                cout<<i<<endl;
                count++;
                break;
            }
        }
        if(count==0) cout<<"-1"<<endl;
    }
}