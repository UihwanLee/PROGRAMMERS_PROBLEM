#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    vector<string> b;
    int k1=0, k2=0, tmp1=bin1.length()-1, tmp2=bin2.length()-1, tmp;
    
    // 이진수를 십진수로 변환
    for(const auto e : bin1) 
    {
        tmp=1;
        for(int i=0; i<tmp1; i++) tmp*=2;
        tmp1--; k1 += (tmp * (e-'0'));
    }
    
    for(const auto e : bin2) 
    {
        tmp=1;
        for(int i=0; i<tmp2; i++) tmp*=2;
        tmp2--; k2 += (tmp * (e-'0'));
    }
    
    // 더한 십진수를 이진수로 변환
    int n = k1 + k2;
    while(n>1)
    {
        b.emplace_back(to_string(n%2));
        n = n/2;
    }
    b.emplace_back(to_string(n%2));
    
    reverse(b.begin(), b.end());
    for(const auto e : b) answer += e;
           
    return answer;
}
