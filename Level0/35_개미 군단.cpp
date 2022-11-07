#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int a = 5, b = 3, c = 1;
    while(hp>=5) 
    {
        hp -= 5;
        answer++;
    }
    while(hp>=3)
    {
        hp-=3;
        answer++;
    }
    answer += hp;
    return answer;
}
