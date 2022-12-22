#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    double min,max;
    double s1[t];
    int i=0;
    for(i=0;i<t;i++){
        cin>>s1[i];
    }
    sort(s1,s1+t);
    min=s1[0];
    max=s1[t-1];
    double sum=0,count=0;
    for(i=1;i<t-1;i++){
        if(s1[i]!= min && s1[i]!= max){
            sum+=s1[i];
            count++;
        }
    }
    cout<<fixed<<setprecision(2)<<sum/(1.0*count)<<endl;
}