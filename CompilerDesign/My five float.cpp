#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.size();
    int cnt = 0;
    if((s[0] >= 'a' && s[0] <= 'h') || (s[0] >= 'A' && s[0] <= 'H') || (s[0] >= 'o' && s[0] <= 'z') || (s[0] >= 'O' && s[0] <= 'Z')){
        cnt++;
        for(int i = 1; i < s.size(); i++){
            if(isalpha(s[i]) || isdigit(s[i]))
            cnt++;
        }
        if(s.size() == cnt)
        {
            cout << "Float Variable" << endl;
            return 0;
        }

        else{
            cout << "Invalid Input" << endl;
            return 0;
        }
    }


    else if(s[0]>='0' && s[0]<='9')
    {
        if(s[0] == '0'){
            int cnt = 0;
            if(s[1] == '.'){
                for(int i = 2; i < len; i++){
                    if(isdigit(s[i]))
                        cnt++;
                }
                if(cnt+2 == len){
                    if(cnt == 2)
                        cout << "Float Number" << endl;
                    else if(cnt > 2)
                        cout << "Double Number" << endl;
                }

                else
                    cout << "Invalid Input" << endl;
            }

            else
                cout << "Invalid" << endl;
        }

        else{
            int cnt1, cnt2, ck;
            cnt1 = cnt2 = ck = 0;
            for(int i = 0; i < len; i++){
                if(!ck && isdigit(s[i]))
                    cnt1++;
                else if(s[i] == '.')
                    ck = 1;
                else if(ck && isdigit(s[i]))
                    cnt2++;
            }

            if((cnt1+cnt2-1) == len){
                if(cnt2 <= 2)
                    cout<<"Float Number"<<endl;
                else
                    cout<<"Double Number"<<endl;
            }
        }
    }
    else
        cout<<"Invalid Input"<<endl;

}

