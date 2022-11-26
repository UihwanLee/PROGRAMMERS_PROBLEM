#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> tmp = arr;
    stable_sort(tmp.begin(), tmp.end());
    if(arr.size()==1) answer.emplace_back(-1);
    else
    {
        for(const auto n : arr)
        {
            if(tmp[0]!=n) answer.emplace_back(n);
        }
    }
    return answer;
}
