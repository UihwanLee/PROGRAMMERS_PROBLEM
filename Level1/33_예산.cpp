#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());
    for(const auto n : d){
        if(n<=budget){
            budget -= n;
            answer++;
        } else {
            break;
        }
    }
    
    return answer;
}
