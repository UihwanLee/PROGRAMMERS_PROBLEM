#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<int> v;
    // 1 2 3 4 5 6 (4) => -3 -2 -1 0 1 2
    // 0 1 -1 2 -2 -3 -> 4+0 4+1 4-1 ...
    for(const auto e : numlist)
    {
        int num = (e-n>=0) ? e-n : -(e-n);
        v.emplace_back(num);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        // �̾����� ���� �ִٸ� n���� ���� ���� �Ǻ�
        if(i>0 && v[i]==v[i-1]) 
        {
            answer.emplace_back(n-v[i]);
            continue;
        }
        // n���� ū�� ���� �� �Ǻ�
        if(find(numlist.begin(), numlist.end(), n+v[i]) != numlist.end()) 
            answer.emplace_back(n+v[i]);
        else answer.emplace_back(n-v[i]);
        
    }
    return answer;
}
