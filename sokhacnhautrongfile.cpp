#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a(100008);
    int n=0;
    ifstream fp;
    fp.open("DATA.in");
    int s;
    while(fp>>s){
        a[n++]=s;
    }
    fp.close();
    sort(a.begin(),a.begin()+n);
    for(int i=0;i<n;i++){
        int temp=1;
        int check=a[i];
        for(int j=i+1;j<n;j++){
            if(check==a[j]) {
                temp++;
                i=j;
            }
            else{
                i=j-1;
                break;
            }
        }
        cout<<a[i]<<" "<<temp<<endl;
    }
}
// #include<iostream>
// #include<map>
// using namespace std;
// int main()
// {
//     FILE *f = freopen("DATA.in","r",stdin);
//     int n;
//     map<int,int>ma;
//     while(cin >> n)
//     {
//         ma[n]++;
//     }
//     for(auto it : ma)
//     cout << it.first <<" " << it.second << endl;
// }