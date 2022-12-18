#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    vector<vector<int>> v;
    vector<int> temp;
    stable_sort(score.begin(), score.end(), greater<>());
    for(int i=0; i<score.size(); i++){
        temp.emplace_back(score[i]);
        if((i+1)%m==0){
            v.emplace_back(temp);
            temp.clear();
        }
    }
    
    for(int i=0; i<v.size(); i++){
        answer += v[i][m-1] * m;
    }
    return answer;
}
