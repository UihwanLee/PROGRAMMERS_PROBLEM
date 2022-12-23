#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    map<int, int> m;
    bool check = true;
    int size = 0;
    for(int i=0; i<score.size(); i++){
        check = false;
        size = 0;
        for(auto iter=m.begin(); iter!=m.end(); iter++) size += iter->second;
        if(size>=k){
            for(auto iter=m.begin(); iter!=m.end(); iter++){
                if(iter->first < score[i]) check = true;
            }
            if(check){
                auto idx = m.find(score[i]);
                if(idx != m.end()) idx->second++;
                else m.insert(pair<int, int>(score[i], 1));
                idx = m.begin();
                if(idx->second <= 1) m.erase(m.begin());
                else idx->second--;
            }
        } else
        {
            auto idx = m.find(score[i]);
            if(idx != m.end()) idx->second++;
            else m.insert(pair<int, int>(score[i], 1));
        }
        auto tmp = m.begin();
        answer.emplace_back(tmp->first);
    }
    return answer;
}
