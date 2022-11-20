#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> arr(n+1, true);
    
    // �����佺�׳׽��� ü
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
