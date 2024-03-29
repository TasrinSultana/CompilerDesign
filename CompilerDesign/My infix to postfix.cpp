#include<bits/stdc++.h>
using namespace std;

bool priority(char ch1, char ch2){
    int op1, op2;
    if(ch1=='^')
        op1 = 3;
    else if(ch1=='+' || ch1=='-')
        op1 = 1;
    else
        op1 = 2;

    if(ch2 == '^')
        op2 = 3;
    else if(ch2 == '+' || ch2 == '-')
        op2 = 1;
    else
        op2 = 2;

    if(op1 >= op2)
        return true;
    else
        return false;

}

string infixToPostfix(string str){
    stack<char>s;
    string pstf = "";

    for(int i = 0; i < str.size(); i++){
        if(isalpha(str[i]))
            pstf += str[i];
        else if(str[i] == '(')
            s.push(str[i]);
        else if(str[i] == ')'){
            while(!s.empty() && s.top() != '('){
                pstf += s.top();
                s.pop();
            }
            s.pop();
        }
        else{
            while(!s.empty() && s.top()!='(' && priority(s.top(), str[i])){
                pstf += s.top();
                s.pop();
            }

            s.push(str[i]);
        }
    }

    while(!s.empty()){
        if(s.top()=='('||s.top()==')');
        else
            pstf += s.top();
        s.pop();
    }

    return pstf;
}

int main(){
    string str;
    cout<<"Enter infix expression: ";
    cin>>str;

    str = "(" + str;
    cout<<"The postfix value is: "<<infixToPostfix(str)<<endl;
    return 0;
}
