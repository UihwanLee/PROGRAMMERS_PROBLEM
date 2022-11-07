#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    answer = { 0, 0 };
    for(const auto e : num_list)
    {
        (e%2==0) ? answer[0]++ : answer[1]++;
    }
    return answer;
}
