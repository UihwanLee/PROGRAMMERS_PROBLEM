#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int,double>& a, pair<int,double>& b){
    if(a.second == b.second) return a <= b;
    return a.second >= b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> v; // ��������, �������� ���� �ڷᱸ��
    
    // 1 ~ N ����������� ���鼭 üũ
    for(int i=1; i<=N; i++){
        double total = 0; // �� ����� ��
        double fail = 0; // ������ ����� ��
        
        for(auto stage : stages){
            // i�� �������� �� ����� �� üũ
            if(stage>=i) total+=1;
            
            // i�� �������� ���� ����� �� üũ
            if(stage==i) fail+=1;
        }
        double per_fail = (fail==0) ? 0 : fail/total;
        v.emplace_back(pair<int, double>(i, per_fail)); // ����
    }
    
    sort(v.begin(), v.end(), comp);
    for(auto iter = v.begin(); iter != v.end(); iter++) {
        answer.emplace_back(iter->first);
    }
    
    return answer;
}
