#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    bool palse = true;
    char x;
    int i, xCount = 0, nCount = 0;
    
    for(i=0; i<s.length(); i++){
        if(palse) { 
            x = s[i]; palse = false;
            xCount = 0; nCount = 0;
        }
        
        if(s[i] == x) xCount++;
        if(s[i] != x) nCount++;
        
        if(xCount == nCount && xCount!=0) {
            palse = true;
            answer++;
        }
    }
    if(xCount != nCount) answer++;
    return answer;
}
