#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    // 삼총사 유형
    // i) (음수, 0, 양수) => 음수 + 양수 = 0
    // ii) (음수, 음수, 양수) => 음수 + 음수 + 양수 = 0
    // iii) (음수, 양수, 양수) => 음수 + 양수 + 양수 = 0
    for(int i=0; i<number.size()-2; i++){
        for(int j=i+1; j<number.size()-1; j++){
            for(int k=j+1; k<number.size(); k++){
                if(number[i] + number[j] + number[k] == 0) answer++;
            }
        }
    }
    return answer;
}
