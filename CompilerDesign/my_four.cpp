#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    if(s[0] >= '1' && s[0] <= '9'){
        cnt = 1;
        for(int i = 1; i < s.size(); i++){
            if(isdigit(s[i]))
            cnt++;
        }

        if(cnt == s.size()){
            if(s.size() > 4){
                cout << "LongInt Number" << endl;
                return 0;
            }
            else{
                cout << "ShortInt Number" << endl;
                return 0;
            }
        }

        else{
            cout << "Invalid Input" << endl;
            return 0;
        }
    }
    else if((s[0] >= 'i' && s[0]<='n') || (s[0] >= 'I' && s[0]<='N')){
        cnt = 1;
        for(int i = 1; i < s.size(); i++){
            if(isalpha(s[i]) || isdigit(s[i]))
            cnt++;
        }

        if(s.size() == cnt)
        {
            cout << "Integer Variable" << endl;
            return 0;
        }

        else{
            cout << "Invalid Input" << endl;
            return 0;
        }
    }

    else
        cout << "Invalid Input" << endl;

}
