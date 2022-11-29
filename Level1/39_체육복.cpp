#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int cnt_reserve_lost = 0; // 여벌 체육복을 가져온 학생 중 도난 당한 학생 수
    int cnt_reserve = 0; // 도난 당한 학생 수들 중에서 여벌의 체육복 가져올 수 있는 학생 수
    int cnt_lost = lost.size(); // 체육복 잃어버린 학생 수
    map<int, bool> m_reserve; // 여벌 체육복 여분 map
    
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    for(auto key : reserve) m_reserve.insert(pair<int, bool>(key, true));
    
    // 여벌 체육복을 가져온 학생 중 도난 당할 경우 체크
    for(int i=0; i<lost.size();) {
        if(m_reserve.find(lost[i])!=m_reserve.end()){
            m_reserve[lost[i]] = false;
            lost.erase(lost.begin() + i);
            cnt_reserve_lost++;
        } 
        else{
        	i++;
		}
    }
 
    // 도난 당한 리스트를 돌면서 여벌의 체육복을 가져올 수 있는지 체크
    // 이때 최대로 빌려올 수 있게 작은 수부터 체크
    for(auto key : lost){
        bool check = false; 
        if(m_reserve.find(key-1)!=m_reserve.end()) { 
            if(m_reserve[key-1]) {
                m_reserve[key-1] = false;
                check = true;
                cnt_reserve++;
            }
        }
        
        if(check) continue; // 체육복을 빌렸으면 넘어간다.
        if(m_reserve.find(key+1)!=m_reserve.end()) { 
            if(m_reserve[key+1]) {
                m_reserve[key+1] = false;
                cnt_reserve++;
            }
        }
    }
    answer = n - cnt_lost + cnt_reserve_lost + cnt_reserve;
    
    return answer;
}
