#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;

int main()
{
	int n = 5;
	vector<int> lost = {2,4}, reserve = {1, 3, 5};
	// lost = {1, 6, 13} reserver = { false: 2, 5, 10, 12 / true: 3, 4, 7, 8, 9, 11}
	// answer = 13 - 7 + 4 + 1 = 11
	
	int answer = 0;
	int cnt_reserve_lost = 0; // 여벌 체육복을 가져온 학생 중 도난 당한 학생 수
    int cnt_reserve = 0; // 도난 당한 학생 수들 중에서 여벌의 체육복 가져올 수 있는 학생 수
    int cnt = 0, cnt_lost = lost.size();
    sort(lost.begin(), lost.end());
    map<int, bool> m_reserve; // 여벌 체육복 여분 map
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
        
        // 체육복을 빌렸으면 넘어간다.
        if(check) continue;
        if(m_reserve.find(key+1)!=m_reserve.end()) { 
            if(m_reserve[key+1]) {
                m_reserve[key+1] = false;
                cnt_reserve++;
            }
        }
    }
    answer = n - cnt_lost + cnt_reserve_lost + cnt_reserve;
    cout << answer;
    
    return 0;
} 
