#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int N;

bool comp(int a, int b)
{
    if(abs(a-N)==abs(b-N)) return a < b;
    return a < b;
}

int main()
{
	vector<int> array = {1, 2, 3, 4, 5, 6};
	int n = 4;
	int answer = 0;
    N=n;
    sort(array.begin(), array.end(), comp);
    answer = array[0];
	
	for(int i=0; i<array.size(); i++)
	{
		cout << array[i] << " ";
	} 
    return 0;
}
