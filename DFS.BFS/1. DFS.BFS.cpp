/*
4 5 1
1 2
1 3
1 4
2 4
3 4

# 1
# |
# 2 3 4

1 2 4 3 (DFS)
1 2 3 4 (BFS)
*/

#include <iostream>
#include <vector>

using namespace std;

// 깊이우선탐색 DFS : stack, 재귀
// 너비우선탐색 BFS : 큐 

// 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 탐색을 시작할 정점의 번호 V가 주어진다. 
int N, M, V; // 전역변수

// 연결그래프 생성
// 1. 2차원 배열 adjacency matrix (NxN) {{F,T,T,T} {F,F,F,T}, {T,F,F,T}, {T,T,T,F}} 
// 2. 2차원 배열 혹은 사전 : { 1:{2,3,4}, 2:{4}, 3:{1,4}, 4:{1,2,3} } 
vector<vector<bool>> graph; // (N+1)x(N+1) 2차원 배열 adjacency matrix
vector<bool> visited1; 		// 각 노드의 DFS 방문기록, false로 초기화
vector<bool> visited2;		// 각 노드의 BFS 방문기록, false로 초기화 

// DFS 재귀구현, preorder traversal (node -> left subtree -> right subtree)
void DFS_rec(int V) {
	cout << V << ' ';
	visited1[V] = true;	// 방문기록 해당 정점 V 방문처리 
	// 방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문
	for(int i=1; i<=N; i++) 
		if(!visited1[i] and graph[V][i])	// 정점 i가 방문하지 않았고 정점 V와 연결되어 있다면
			DFS_rec(i);					 	// 재귀 호출 
} 

// DFS 스택구현, LIFO(Last In First Out) Stack: [ ] <-, [ ] ->, Queue(FIFO): [ ] <-, <- [ ] 
void DFS_stack(int V) {
	vector<int> stack;
	stack.push_back(V);
	while(!stack.empty()) {	// stack이 빌때 까지 
		V = stack.back();	// 제일 뒤에서 추출 
		stack.pop_back();
		if(!visited1[V]) {
			cout << V << ' ';
			visited1[V] = true;	// 방문기록 해당 정점 V 방문처리 
		}
		// 방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문
		for(int i=N; i>=1; i--) {	// 정점 번호를 N부터 내림차순으로 stack에 삽입 
			if(!visited1[i] and graph[V][i])	// 정점 i가 방문하지 않았고 정점 V와 연결되어 있다면
				stack.push_back(i);				// 해당 정점 i를 제일 뒤에 삽입 
		}
	}
} 

// BFS 큐 구현 : Queue(FIFO): [ ] <-, <- [ ]
void BFS_queue(int V) {
	vector<int> queue;
	queue.push_back(V);		// 제일 뒤에 삽입 
	while(!queue.empty()) {	// queue가 빌때 까지 
		V = queue.front();	// 제일 앞에서 추출
		queue.erase(queue.begin());
		if(!visited2[V]) {
			cout << V << ' ';
			visited2[V] = true;	// 방문기록 해당 정점 찰;  
		}
		// 방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문
		for(int i=1; i<=N; i++) {			// 정점 번호를 N부터 오름차순으로 queue에 삽입 
			if(!visited2[i] and graph[V][i])	// 정점 i가 방문하지 않았고 정점 V와 연결되어 있다면
				queue.push_back(i);				// 해당 정점 i를 제일 뒤에 삽입 
		} 
	}
} 

int main()
{
	// 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 탐색을 시작할 정점의 번호 V가 주어진다. 
	cin >> N >> M >> V;
	graph.resize(N+1, vector<bool>(N+1, false));
	visited1.resize(N+1, false);
	visited2.resize(N+1, false);
	
	// 다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다. 
	// 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 
	// 입력으로 주어지는 간선은 양방향이다.	
	
	for(int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;	// a <-> b 양방향 간선(edge)
		graph[a][b] = true;	// 인덱스 1부터 시작 
		graph[b][a] = true; 	// 인덱스 1부터 시작 
	} 
	
	//DFS_rec(V);
	DFS_stack(V);
	cout << endl;
	BFS_queue(V);
}
