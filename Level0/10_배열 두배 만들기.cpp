#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(const auto e : numbers)
    {
        answer.emplace_back(e*2);
    }
    return answer;
}
