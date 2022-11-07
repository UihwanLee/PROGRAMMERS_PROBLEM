#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<int> m;
    
    for(int i=2; i<=n; i++)
    {
        if(n%i==0) m.emplace_back(i);
    }
    
    for(int i=0; i<m.size(); i++)
    {
        int pn = 1;
        for(int j=2; j*j<=m[i]; j++)
        {
            if(m[i]%j==0) {pn=0; break;}
        }
        if(pn == 1) answer.emplace_back(m[i]);
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}
