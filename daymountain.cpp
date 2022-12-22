#include<bits/stdc++.h> 
using namespace std; 
void Solution(int a[], int m, int first, int last){ 
    int b[1005], k = 0; 
    for(int i = first;i < last;i++){ 
        if(a[i] <= a[i + 1]) {
            b[k++] = 1;  
        } 
        else { 
            b[k++] = 0;
        } 
    } 
    if(b[0] == 1) { 
        for(int i = 0;i < k;i++){ 
            if(b[i] == 0){ 
                for(int j = i + 1;j < k;j++){ 
                    if(b[j] == 1) { 
                        cout<<"No"<<endl; 
                         return; 
                    } 
                } 
            } 
        } 
        cout<<"Yes"<<endl; 
        return; 
    } 
    else { 
        for(int i = 0;i < k;i++){ 
            if(b[i] == 1) { 
                cout<<"No"<<endl; 
                return; 
            } 
        } 
        cout<<"Yes"<<endl; return; 
    } 
    return; 
} 
int main(){ 
    int t; 
    cin>>t;
    while(t--){ 
        int n, a[1005]; 
        cin>>n; 
        for(int i = 0;i < n ;i++) cin>>a[i]; 
        int first, last; 
        cin>>first>>last; 
        Solution(a,n,first,last); 
    } 
    return 0; 
} 