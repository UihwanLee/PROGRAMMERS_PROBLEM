#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int order_cards1 = 0;
    int order_cards2 = 0;

    for (const auto& word : goal) {
        if (order_cards1 < cards1.size() && cards1[order_cards1] == word) {
            order_cards1++; // cards1���� �ܾ� ���
        } 
        else if (order_cards2 < cards2.size() && cards2[order_cards2] == word) {
            order_cards2++; // cards2���� �ܾ� ���
        } 
        else {
            return "No"; // �� ī�� ��ġ���� �ܾ ã�� �� ������ ����
        }
    }

    return "Yes"; // ��� �ܾ ������� ���� �� ����
}
