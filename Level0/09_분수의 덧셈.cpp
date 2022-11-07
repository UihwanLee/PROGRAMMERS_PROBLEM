#include <string>
#include <vector>

using namespace std;

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;
    int tmp1 = (denum1*num2) + (denum2*num1);
    int tmp2 = num1*num2;
    
    int N = (tmp1<=tmp2) ? tmp1 : tmp2, T=2;
    while(T<=N)
    {
        if(tmp1 ==1 || tmp2 == 1) break;
        
        if(tmp1%T==0 && tmp2%T==0)
        {
            tmp1 = tmp1/T; tmp2 = tmp2/T;
            if(tmp1 ==1 || tmp2 == 1) break;
        }
        else
        {
            T++;
        }
    }
    answer.emplace_back(tmp1);
    answer.emplace_back(tmp2);
    return answer;
}
