#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
	int answer = 0;
    int size = board.size();
    vector<vector<int>> temp = {{1,0},{-1,0},{0,1},{0,-1},{1,-1},{1,1},{-1,1},{-1,-1}};
    // p,q => (p+1,q), (p-1,q), (p,q+1), (p,q-1), (p+1,q+1), (p+1,q-1), (p-1,q+1), (p-1,q+1)
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(board[i][j]==1)
            {
            	for(int k=0; k<8; k++)
    			{
        			int newP=i+temp[k][0], newQ=j+temp[k][1];
        			if(newP<0 || newQ<0 || newP>=board.size() || newQ>=board.size()) continue;
        			if(board[newP][newQ]==0) 
					{
						board[newP][newQ]=2;
					}
   				}
			}
        }
    }
    
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(board[i][j]==0) answer++;
        }
    }
    return answer;
}
