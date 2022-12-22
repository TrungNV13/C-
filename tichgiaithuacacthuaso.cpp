#include <bits/stdc++.h> 
using namespace std; 
int main() { 
    int c[10]={0}; 
    int t; 
    cin>>t; 
    while(t--) { 
        int n; 
        char a; 
        cin>>n; 
        while(n--) { 
            cin>>a; 
            if (a=='1') continue; 
            if (a=='2'||a=='3'||a=='5'||a=='7') c[a-48]++; 
            if (a=='4') {
                c[2]+=2;
                c[3]++; 
            } 
            if (a=='6') { 
                c[5]++; 
                c[3]++; 
            } 
            if (a=='8') { 
                c[7]++; 
                c[2]+=3; 
            } 
            if (a=='9') { 
                c[7]++;
                c[3]+=2; 
                c[2]++; } 
        } 
        for (int i=9; i>1; i--) { 
            while (c[i]>0) { 
                cout<<i; 
                c[i]--; 
            } 
        } 
        cout<<endl; 
    } 
} 