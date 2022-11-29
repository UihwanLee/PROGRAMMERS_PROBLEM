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
    vector<pair<int, double>> v; // 스테이즈, 실패율을 담을 자료구조
    
    // 1 ~ N 스테이즈까지 돌면서 체크
    for(int i=1; i<=N; i++){
        double total = 0; // 총 사용자 수
        double fail = 0; // 실패한 사용자 수
        
        for(auto stage : stages){
            // i번 스테이즈 총 사용자 수 체크
            if(stage>=i) total+=1;
            
            // i번 스테이즈 실패 사용자 수 체크
            if(stage==i) fail+=1;
        }
        double per_fail = (fail==0) ? 0 : fail/total;
        v.emplace_back(pair<int, double>(i, per_fail)); // 저장
    }
    
    sort(v.begin(), v.end(), comp);
    for(auto iter = v.begin(); iter != v.end(); iter++) {
        answer.emplace_back(iter->first);
    }
    
    return answer;
}
