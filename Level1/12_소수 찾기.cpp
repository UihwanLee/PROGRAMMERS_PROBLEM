#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> arr(n+1, true);
    
    // 에라토스테네스의 체
    for(int i=2; i<=n; i++)
    {
        if(arr[i])
        {
            for(int j=2*i; j<=n; j+=i)
            {
                arr[j] = false;
            }
        }
    }
    
    for(int i=2; i<=n; i++)
    {
        if(arr[i]) answer++;
    }
    
    return answer;
}
