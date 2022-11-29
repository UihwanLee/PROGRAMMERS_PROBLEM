#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int cnt_reserve_lost = 0; // ���� ü������ ������ �л� �� ���� ���� �л� ��
    int cnt_reserve = 0; // ���� ���� �л� ���� �߿��� ������ ü���� ������ �� �ִ� �л� ��
    int cnt_lost = lost.size(); // ü���� �Ҿ���� �л� ��
    map<int, bool> m_reserve; // ���� ü���� ���� map
    
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    for(auto key : reserve) m_reserve.insert(pair<int, bool>(key, true));
    
    // ���� ü������ ������ �л� �� ���� ���� ��� üũ
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
 
    // ���� ���� ����Ʈ�� ���鼭 ������ ü������ ������ �� �ִ��� üũ
    // �̶� �ִ�� ������ �� �ְ� ���� ������ üũ
    for(auto key : lost){
        bool check = false; 
        if(m_reserve.find(key-1)!=m_reserve.end()) { 
            if(m_reserve[key-1]) {
                m_reserve[key-1] = false;
                check = true;
                cnt_reserve++;
            }
        }
        
        if(check) continue; // ü������ �������� �Ѿ��.
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
