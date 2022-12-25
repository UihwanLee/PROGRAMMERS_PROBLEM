#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long num = stoll(p);
    int len = p.length();
    for(int i=0; i<=t.length()-len; i++){
        string s = "";
        for(int j=i; j<i+len; j++){
            s += t[j];
        }
        if(num >= stoll(s)) answer++;
    }
    return answer;
}
