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
    vector<int> index(board.size()+1, 0); // board의 각 열 최상단에 들어있는 index 배열
    vector<int> stack; // 뽑힌 인형이 담길 벡터
    
    // index 뽑기
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board.size(); j++){
            // index에 이미 값이 들어있는 경우가 아닐 때
            if(board[i][j]!=0 && index[j]==0){
                index[j] = i;
            }
        }
    }
      
    // moves 돌면서 인형을 뽑는다.
    for(auto n : moves){
        // n번째 열이 빈열이면 continue
        if(index[n-1]>= board.size()) continue;
        
        // board안에 인형이 있는지 체크하고 있으면 stack에 넣음 && index 갱신
        if(board[index[n-1]][n-1]!=0){
            stack.emplace_back(board[index[n-1]][n-1]);
            index[n-1]++;
        }
    }
    
    // stack을 돌면서 연속되는 인형 체크
    while(true){
        bool check = true;
        
        // stack이 다 비워져 있거나 1개 밖에 없으면 break
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
        
        // 추가적인 2개의 연속되는 인형이 없으면 종료
        if(check) break;
    }
    cout << answer;
    
    return 0;
} 
