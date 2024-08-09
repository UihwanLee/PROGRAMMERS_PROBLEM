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

// ���̿켱Ž�� DFS : stack, ���
// �ʺ�켱Ž�� BFS : ť 

// ������ ���� N(1 �� N �� 1,000), ������ ���� M(1 �� M �� 10,000), Ž���� ������ ������ ��ȣ V�� �־�����. 
int N, M, V; // ��������

// ����׷��� ����
// 1. 2���� �迭 adjacency matrix (NxN) {{F,T,T,T} {F,F,F,T}, {T,F,F,T}, {T,T,T,F}} 
// 2. 2���� �迭 Ȥ�� ���� : { 1:{2,3,4}, 2:{4}, 3:{1,4}, 4:{1,2,3} } 
vector<vector<bool>> graph; // (N+1)x(N+1) 2���� �迭 adjacency matrix
vector<bool> visited1; 		// �� ����� DFS �湮���, false�� �ʱ�ȭ
vector<bool> visited2;		// �� ����� BFS �湮���, false�� �ʱ�ȭ 

// DFS ��ͱ���, preorder traversal (node -> left subtree -> right subtree)
void DFS_rec(int V) {
	cout << V << ' ';
	visited1[V] = true;	// �湮��� �ش� ���� V �湮ó�� 
	// �湮�� �� �ִ� ������ ���� ���� ��쿡�� ���� ��ȣ�� ���� ���� ���� �湮
	for(int i=1; i<=N; i++) 
		if(!visited1[i] and graph[V][i])	// ���� i�� �湮���� �ʾҰ� ���� V�� ����Ǿ� �ִٸ�
			DFS_rec(i);					 	// ��� ȣ�� 
} 

// DFS ���ñ���, LIFO(Last In First Out) Stack: [ ] <-, [ ] ->, Queue(FIFO): [ ] <-, <- [ ] 
void DFS_stack(int V) {
	vector<int> stack;
	stack.push_back(V);
	while(!stack.empty()) {	// stack�� ���� ���� 
		V = stack.back();	// ���� �ڿ��� ���� 
		stack.pop_back();
		if(!visited1[V]) {
			cout << V << ' ';
			visited1[V] = true;	// �湮��� �ش� ���� V �湮ó�� 
		}
		// �湮�� �� �ִ� ������ ���� ���� ��쿡�� ���� ��ȣ�� ���� ���� ���� �湮
		for(int i=N; i>=1; i--) {	// ���� ��ȣ�� N���� ������������ stack�� ���� 
			if(!visited1[i] and graph[V][i])	// ���� i�� �湮���� �ʾҰ� ���� V�� ����Ǿ� �ִٸ�
				stack.push_back(i);				// �ش� ���� i�� ���� �ڿ� ���� 
		}
	}
} 

// BFS ť ���� : Queue(FIFO): [ ] <-, <- [ ]
void BFS_queue(int V) {
	vector<int> queue;
	queue.push_back(V);		// ���� �ڿ� ���� 
	while(!queue.empty()) {	// queue�� ���� ���� 
		V = queue.front();	// ���� �տ��� ����
		queue.erase(queue.begin());
		if(!visited2[V]) {
			cout << V << ' ';
			visited2[V] = true;	// �湮��� �ش� ���� ��;  
		}
		// �湮�� �� �ִ� ������ ���� ���� ��쿡�� ���� ��ȣ�� ���� ���� ���� �湮
		for(int i=1; i<=N; i++) {			// ���� ��ȣ�� N���� ������������ queue�� ���� 
			if(!visited2[i] and graph[V][i])	// ���� i�� �湮���� �ʾҰ� ���� V�� ����Ǿ� �ִٸ�
				queue.push_back(i);				// �ش� ���� i�� ���� �ڿ� ���� 
		} 
	}
} 

int main()
{
	// ������ ���� N(1 �� N �� 1,000), ������ ���� M(1 �� M �� 10,000), Ž���� ������ ������ ��ȣ V�� �־�����. 
	cin >> N >> M >> V;
	graph.resize(N+1, vector<bool>(N+1, false));
	visited1.resize(N+1, false);
	visited2.resize(N+1, false);
	
	// ���� M���� �ٿ��� ������ �����ϴ� �� ������ ��ȣ�� �־�����. 
	// � �� ���� ���̿� ���� ���� ������ ���� �� �ִ�. 
	// �Է����� �־����� ������ ������̴�.	
	
	for(int i=0; i<M; i++) {
		int a, b;
		cin >> a >> b;	// a <-> b ����� ����(edge)
		graph[a][b] = true;	// �ε��� 1���� ���� 
		graph[b][a] = true; 	// �ε��� 1���� ���� 
	} 
	
	//DFS_rec(V);
	DFS_stack(V);
	cout << endl;
	BFS_queue(V);
}
