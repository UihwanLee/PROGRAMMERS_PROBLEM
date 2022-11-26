#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int max=0, min = (n<m) ? n : m;
    for(int i=1; i<=min; i++)
    {
        if(n%i==0 && m%i==0) 
        {
            if(max<i) max=i;
        }
    }
    answer.emplace_back(max);
    answer.emplace_back(max*(n/max)*(m/max));
    return answer;
}
