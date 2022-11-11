#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int cnt=0;
    sort(lines.begin(), lines.end());
    int start = min(min(lines[0][0], lines[1][0]), lines[2][0]);
    int end = max(max(lines[0][1], lines[1][1]), lines[2][1]);
    vector<int> v(end-start, 0);
    for(int i=0; i<lines.size(); i++)
    {
        for(int j=lines[i][0]-start; j<lines[i][1]-start; j++)
        {
            if(v[j]==0) 
            {
                v[j]=1;
            }
            else if(v[j]==1) 
            {
                v[j]=2;
            }
        }
    }
    
    for(const auto e : v) 
    {
        if(e==2) answer++;
    }
    return answer;
}
