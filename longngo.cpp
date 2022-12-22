#include<bits/stdc++.h>
int uu_tien(char c){
    if(c== '(') return 0;
    if(c== '+' || c=='-') return 1;
    if(c== '*' || c== '/' || c=='%') return 2;
    if(c== '^') return 3;
}
void hauto(){
    std::string str,str1="";    // khởi tạo chuỗi str và str1 = rỗng
    std::cout<<"nhap bieu thuc:";
    getline(std::cin,str);     // nhập chuỗi
    std::stack<char> s;        // khởi tạo biến stack s
    int i=0;
    std::cout<<"bieu thuc hau to:";
    while(i<str.length()){     // điều kiện để vòng lặp while chạy: i< độ dài xâu
        char c=str[i];          // khởi tạo biến char c         
        if(c-'0'>=0 && c-'0'<=9 || c>=65 && c<=90 || c>=97 && c<=122) str1=str1+c;  //xem bảng mã ascii để hiểu. Chuyển từ kí tự về kiểu số nguyên
        else{
            std::cout<<str1<<" ";  //in ra str1
            str1="";   // khởi tạo lại để chạy
            if(c== '(') s.push(c);   // xét tới dấu '(' thì đẩy vào stack luôn
            else{
                if(c==')'){
                    while(s.top() != '('){    
                        std::cout<<s.top();  //in ra các kí tự từ phải qua trái cho tới dấu '('  
                        s.pop();  // xong rồi xóa các kí tự đó trong stack
                    }
                    s.pop();   // xóa dấu '('
                }
                else {
                    while(!s.empty() && uu_tien(c) <= uu_tien (s.top())) {  //vòng while chỉ chỉ có toán tử, rồi xét điều kiện dấu
                        std::cout<<s.top();      // so sánh kí tự trước và sau về độ ưu tiên rồi in ra
                         s.pop();     // xóa đi kí tự trong stack
                    }
                    s.push(c);    // rồi đẩy kí tự tiếp vào stack
                }
            }
        }
        i++;
    }
    if(str1 != "") std::cout<<str1<<" ";  //in ra số or chữ cuối cùng 
    while(!s.empty()){
        std::cout<<s.top();  //in lần lượt các toán tử từ phải qua trái
        s.pop();   // sau khi in xong thì xóa luôn các toán tử
    }
}
int main(){
    hauto();
}