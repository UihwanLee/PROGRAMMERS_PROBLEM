#include <string>
#include <vector>

using namespace std;

bool isEven(int num){
    int count = 0;
    for(int i=1; i*i<=num; i++){
        if(i*i==num) count++;
        else if(num%i==0) count+=2;
    }
    
    if(count%2==0) return true;
    else return false;
}

int solution(int left, int right) {
    int answer = 0;
    for(int i=left; i<=right; i++){
        int tmp = (isEven(i)) ? i : i*(-1);
        answer += tmp;
    }
    return answer;
}
