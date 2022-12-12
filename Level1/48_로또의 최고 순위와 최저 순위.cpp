#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int win_rate=0, able_rate=0, high=0, low=0;
    for(const auto num : lottos) if(num==0) able_rate++;
    for(const auto win_num : win_nums){
        for(const auto num : lottos){
            if(num==win_num) win_rate++;
        }
    }
    high = 7 - (win_rate + able_rate);
    low = 7 - win_rate;
    answer.emplace_back((high>=6) ? 6 : high);
    answer.emplace_back((low>=6) ? 6 : low);
    return answer;
}
