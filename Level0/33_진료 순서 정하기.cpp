#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> v = emergency; sort(v.begin(), v.end(), greater<>());
    for(const auto e : emergency)
    {
        for(int i=0; i<v.size(); i++)
        {
            if(e==v[i]) answer.emplace_back(i+1);
        }
    }
    return answer;
}
