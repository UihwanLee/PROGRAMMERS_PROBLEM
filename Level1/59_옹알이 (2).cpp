#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> arr = { "aya", "ye", "woo", "ma" };
    
    for(auto& s : babbling){
        for(int i=0; i<arr.size(); i++){
            while(s.find(arr[i]) != string::npos){
                s.replace(s.find(arr[i]), arr[i].length(), to_string(i));
            }
        }
    }
    
    for(const auto s : babbling){
        bool check = true;
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            if(c-'0' >= 0 && c-'0' <= 9){
                if(i>0){
                    if(s[i]==s[i-1]) check = false;
                }
            } else {
                check = false;
            }
        }
        if(check) answer++;
    }
    
    
    return answer;
}
