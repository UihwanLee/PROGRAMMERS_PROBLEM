#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    vector<int> v; int cnt;
    for(int i=0; i<array.size(); i++)
    {
        cnt = 1;
        for(int j=0; j<array.size(); j++)
        {
            if(array[i]<array[j]) cnt++;
        }
        v.emplace_back(cnt);
    }
    
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==1)
        {
            answer.emplace_back(array[i]);
            answer.emplace_back(i);
        }
    }
    return answer;
}
