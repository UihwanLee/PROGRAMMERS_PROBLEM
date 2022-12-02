#include <vector>
#include <iostream>
#include <math.h>
#define PICK 3
using namespace std;

int answer = 0; // 소수가 되는 경우의 개수

bool isPrime(int num) {
	if (num < 2) return false;
	int a = (int) sqrt(num);
	for (int i = 2; i <= a; i++) if (num % i == 0) return false;
	return true;
}

void Comb(vector<int> nums, vector<int> comb, int index, int depth){
    if (depth == PICK){
        int sum = 0;
        for (int i=0; i < PICK; i++) {
            sum += comb[i];
        }
        
        if (isPrime(sum))
            answer++;
        
        return;
    } else {
        for (int i=index; i < nums.size(); i++){
            comb[depth] = nums[i];
            Comb(nums, comb, i+1, depth+1);
        }
    }
}
	
int solution(vector<int> nums) {
    
    vector<int> comb(PICK);
    
    Comb(nums, comb, 0, 0);

    return answer;
}
