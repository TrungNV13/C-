#include<bits/stdc++.h> 
using namespace std; 
int check(int a[], int b[], int n, int m) { 
    int sum = 0; 
    int temp = 0; 
    for(int i = 0; i < n; i++) { 
        temp += a[i]; 
        int test = 0; 
        for(int j = i + 1; j < m; j++) { 
            test += b[j]; 
        } 
        if(test + temp > sum) sum = test + temp; 
    } 
    return sum; 
} 
void nhap(int a[], int n) { 
    for(int i = 0; i < n; i++) cin >> a[i]; 
} 
int main() { 
    int t; 
    cin >> t; 
    while(t--) { 
        int m, n,*a,*b; 
        cin >> n>> m; 
        a=new int[n];
        b=new int[m];
        nhap(a, n); 
        nhap(b, m); 
        int max = check(a, b, n, m); 
        int temp = check(b, a, m, n); 
        if(max < temp) max = temp; 
        cout << max << endl; 
    } 
}