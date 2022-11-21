#include<bits/stdc++.h>
using namespace std;
int stc[100];
int ind=0;
void push(int n){
    if (ind>100) cout << "Overflow"<<endl;
    else stc[ind++]=n;
}
int top(){
    if (ind<0){
        cout << "Underflow"<<endl;
        return -1;
    }
    else return stc[--ind];
}
int pw(int a,int b){
   int sum=1;
    for (int i=a;i<=b;i++){
        sum*=a;
    }
    cout << sum <<endl;
    return sum;
}
int main()
{
    string s;
    cin>>s;
    for (int i=0;i<s.size();i++){
        if (s[i]>='0' and s[i]<='9') push(s[i]-'0');
        else{
            int a=top();
            int b=top();
            //cout << a << ' ' << b << endl;
            if (a==-1 || b==-1) cout << "Not possible" << endl;
            else {
                if (s[i]=='*'){
                    push(a*b);
                }
                else if (s[i]=='/'){
                    if (b==0) cout <<"Exception throw" << endl;
                    else push(a/b);
                }
                else if (s[i]=='+') push(a+b);
                else if (s[i]=='^') push(pow(b,a));
                else push(a-b);
            }

        }
    }
    int result=top();
    cout << result << endl;
}