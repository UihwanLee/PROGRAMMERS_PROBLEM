#include <string>
#include <vector>

using namespace std;

// 약수 개수를 반환하는 함수
int GetCount(int num){
    int i, count = 0;
    for(i=1; i*i<num; i++){
        if(num%i==0) count+=2;
    }
    if(i*i==num) count++;
    return count;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i=1; i<=number; i++){
        int count = GetCount(i);
        if(count<=limit){
            answer += count;
        } else {
            answer += power;
        }
    }
    return answer;
}
