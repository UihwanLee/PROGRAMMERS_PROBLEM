#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int order_cards1 = 0;
    int order_cards2 = 0;

    for (const auto& word : goal) {
        if (order_cards1 < cards1.size() && cards1[order_cards1] == word) {
            order_cards1++; // cards1에서 단어 사용
        } 
        else if (order_cards2 < cards2.size() && cards2[order_cards2] == word) {
            order_cards2++; // cards2에서 단어 사용
        } 
        else {
            return "No"; // 두 카드 뭉치에서 단어를 찾을 수 없으면 실패
        }
    }

    return "Yes"; // 모든 단어를 순서대로 만들 수 있음
}
