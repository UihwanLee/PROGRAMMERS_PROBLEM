#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer{ 0, 0 };

    int boardX = board[0] / 2, boardY = board[1] / 2;

    for (int i = 0; i < keyinput.size(); i++) {

        if (keyinput[i] == "left") {
            if (answer[0] > -boardX) answer[0]--;
        }
        else if (keyinput[i] == "right") {
            if (answer[0] < boardX) answer[0]++;
        }
        else if (keyinput[i] == "up") {
            if (answer[1] < boardY) answer[1]++;
        }
        else if (keyinput[i] == "down") {
            if (answer[1] > -boardY) answer[1]--;
        }
    }

    return answer;
}
