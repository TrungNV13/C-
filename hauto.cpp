#include<bits/stdc++.h>
#define ll long long
int main(){
    std::cout<<"nhap so luong bieu thuc:";
    int t;             // tạo biểu thức(có thể nhiều bthuc)
    std::cin>>t;       // nhap biểu thức
    std::cin.ignore(); // để nhập xâu vì nếu không có cái này xâu sẽ nhận ký tự enter (nhảy dòng)
    while(t--){
        std::cout<<"nhap bieu thuc can tinh:";
        std::string s;
        getline(std::cin,s);   //nhập xâu
        std::stack<ll> s1;      // lưu kiểu dữ liệu long long
        ll l=s.length();        // tạo độ dài của xâu 
        for(int i=0;i<l;i++){
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='%'|| s[i]=='^' ){
                ll a=s1.top(); s1.pop();       //lấy số trên cùng xong lại xóa trong stack
                ll b=s1.top(); s1.pop();       // lấy số dưới số rồi làm tương tự
                ll temp=0;
                if(s[i]=='+') temp=b+a;
                else if(s[i]=='-') temp=b-a;
                else if(s[i]=='*') temp=b*a;
                else if(s[i]=='/') temp=b/a;
                else if(s[i]=='%') temp=b%a;
                else if(s[i]=='^'){
                    temp=1;
                    for(int i=1;i<=a;i++){
                        temp=temp*b;
                    }
                }
                s1.push(temp);    // khi thực hiện quả sẽ đẩy vào stack 
            }
            else s1.push((ll)(s[i]-'0'));  // ép kiểu long long 
        }
        
        std::cout<<"bieu thuc sau khi duoc tinh:"<<s1.top()<<std::endl; // in ra kq xong xuong dong
    }
}