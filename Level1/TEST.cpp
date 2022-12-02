#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;

string GET_NEW_ID(string _id){
    string new_id = "";
    vector<string> sign = {"-","_", ".", "~", "!", "@", "#", "$", "%", "^", "&", "*", "(", ")", "=", "+", "[", "{", "]", "}", ":", "?", ",", "<", ">", "/"};
    bool pass = true; // 검열 성공 여부
    
    // 01. 빈 문자열 검사
    if(_id=="") { pass=false; _id+="a"; }
    
    // 02. 처음이나 끝 . 검사
    if(_id[0]=='.') { 
        pass = false;
        for(int i=1; i<_id.length(); i++) new_id += _id[i];
    }
    else if(_id[_id.length()-1]=='.'){
        pass = false;
        for(int i=1; i<_id.length(); i++) new_id += _id[i];
    }
    
    
    // 03. 2자 이하 검사
    if(_id.length()<=2) {
        pass = false;
        while(_id.length()<=2) _id += _id[_id.length()-1];
    }
    
    // 04. 16장 이상 검사
    if(_id.length()>=16) {
        pass = false;
        for(int i=0; i<15; i++){
            new_id += _id[i];
        }
    }
    
    // 05. .. -> . 검사
    auto idx = _id.find("..");
    if(idx!=string::npos){
        pass = false;
        _id.replace(idx, _id.length(), ".");
    }
    
    // 06. 특수 문자 제거 검사
    for(int i=0; i<_id.length(); i++){
        if(!(isalpha(_id[i]) || isdigit(_id[i]))){
            for(auto s : sign){
                idx = _id.find(s);
                if(idx==string::npos){
                    pass = false;
                    //_id.erase(_id.begin() + i);
                }
            }
        }
        
        // 07. 대문자 검사
        if(isalpha(_id[i])){
            if((int)_id[i] < 97) _id[i] = (char)((int)_id[i] + 32);
        }
    }
    
    if(new_id=="") new_id = _id;
    
    /*
    // 검열 성공 시 new_id return 
    if(pass) return new_id;
    // 검열 실패 시 다시 검열
    else return (GET_NEW_ID(new_id));
    */
    return new_id;
}


int main()
{
	string new_id = "...!@BaT#*..y.abcdefghijklm";
	string answer = "";
    answer = GET_NEW_ID(new_id);
    cout << answer;
    
    return 0;
} 
