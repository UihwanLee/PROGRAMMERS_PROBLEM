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
	int cnt_reserve_lost = 0; // ���� ü������ ������ �л� �� ���� ���� �л� ��
    int cnt_reserve = 0; // ���� ���� �л� ���� �߿��� ������ ü���� ������ �� �ִ� �л� ��
    int cnt = 0, cnt_lost = lost.size();
    sort(lost.begin(), lost.end());
    map<int, bool> m_reserve; // ���� ü���� ���� map
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
        
        // ü������ �������� �Ѿ��.
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
