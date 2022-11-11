#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	string bin1 = "10", bin2 = "11";
	string answer = "";
    vector<string> b;
    int k1=0, k2=0, tmp1=bin1.length()-1, tmp2=bin2.length()-1, tmp;
    
    // 이진수를 십진수로 변환
    for(const auto e : bin1) 
    {
        /*
        if(e=='0' && tmp1==1) 
        {
            k1 = 0; break;
        }
        */
        tmp=1;
        for(int i=0; i<tmp1; i++) tmp*=2;
        tmp1--; k1 += (tmp * (e-'0'));
    }
    
    for(const auto e : bin2) 
    {
        /*
        if(e=="0" && tmp2==1) 
        {
            k2 = 0; break;
        }
        */
        tmp=1;
        for(int i=0; i<tmp2; i++) tmp*=2;
        tmp2--; k2 += (tmp * (e-'0'));
    }
    
    // 더한 십진수를 이진수로 변환
    int n = k1 + k2;
    while(n>1)
    {
        // 4 -> 2 -> 1 5 -> 2..1 -> 
        b.emplace_back(to_string(n%2));
        n = n/2;
    }
    b.emplace_back(to_string(n%2));
    
    reverse(b.begin(), b.end());
    for(const auto e : b) answer += e;
    
    cout << answer;
    
    return 0;
}
