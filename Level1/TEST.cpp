#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <sstream>
#include <map>

using namespace std;

int main()
{
	vector<vector<int>> board = { {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1} };
	vector<int> moves = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
	int answer = 0;
    vector<int> index(board.size()+1, 0); // board�� �� �� �ֻ�ܿ� ����ִ� index �迭
    vector<int> stack; // ���� ������ ��� ����
    
    // index �̱�
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board.size(); j++){
            // index�� �̹� ���� ����ִ� ��찡 �ƴ� ��
            if(board[i][j]!=0 && index[j]==0){
                index[j] = i;
            }
        }
    }
      
    // moves ���鼭 ������ �̴´�.
    for(auto n : moves){
        // n��° ���� ���̸� continue
        if(index[n-1]>= board.size()) continue;
        
        // board�ȿ� ������ �ִ��� üũ�ϰ� ������ stack�� ���� && index ����
        if(board[index[n-1]][n-1]!=0){
            stack.emplace_back(board[index[n-1]][n-1]);
            index[n-1]++;
        }
    }
    
    // stack�� ���鼭 ���ӵǴ� ���� üũ
    while(true){
        bool check = true;
        
        // stack�� �� ����� �ְų� 1�� �ۿ� ������ break
        if(stack.empty() || stack.size()==1) break;
        
        for(int i=0; i<=stack.size()-2;){
            if(stack[i]==stack[i+1]){
                answer+=2;
                stack.erase(stack.begin() + (i+1));
                stack.erase(stack.begin() + i);
                check = false;
                break;
            }else{
                i++;
            }
        }
        
        // �߰����� 2���� ���ӵǴ� ������ ������ ����
        if(check) break;
    }
    cout << answer;
    
    return 0;
} 
