#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    int idx = 0; vector<int> v;
    for(const auto e : num_list)
    {
        if(idx<n)
        {
            v.emplace_back(e);
            idx++;
        }
        else
        {
            answer.emplace_back(v);
            v.clear();
            idx = 0;
            v.emplace_back(e);
            idx++;
        }
    }
    answer.emplace_back(v);
    return answer;
}
