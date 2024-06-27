#include <string>
#include <vector>

using namespace std;

long long findMaxDivisor(long long n)
{
    long long result = 1;
    
    for(long long i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            result = i;
            
            if(n / i <= 10000000) {
                result = n / i;
                break;
            }
        }
    }
    
    return result;
}

vector<int> solution(long long begin, long long end) {
    vector<int> answer;
    
    // 소수 -> 1
    // 소수가 아니면 약수 중 가장 큰 수
    
    for(long long i = begin; i <= end; i++) {
        if(i==1) answer.emplace_back(0);
        else
        {
            answer.emplace_back(findMaxDivisor(i));
        }
    }
    
    return answer;
}
