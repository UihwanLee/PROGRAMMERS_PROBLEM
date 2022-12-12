#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    bool check;
    for(int i=0; i<=9; i++){
        check = true;
        for(int j=0; j<numbers.size(); j++){
            if(numbers[j]==i) check = false;
        }
        if(check) answer += i;
    }
    return answer;
}
