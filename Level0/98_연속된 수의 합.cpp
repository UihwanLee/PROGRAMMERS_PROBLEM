#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int sum = 0;
    for(int i=-50; i<=total; i++)
    {
        sum = 0;
        for(int j=0; j<num; j++)
        {
            sum += i + j;
        }
        if(sum==total)
        {
            for(int j=0; j<num; j++)
            {
                answer.emplace_back(i + j);
            }
            break;
        }
    }
    return answer;
}
