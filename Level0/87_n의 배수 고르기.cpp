#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    for(const auto k : numlist)
    {
        if(k%n==0) answer.emplace_back(k);
    }
    return answer;
}
