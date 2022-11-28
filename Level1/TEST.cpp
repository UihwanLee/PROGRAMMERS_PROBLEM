#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <sstream>

using namespace std;

int main()
{
	int a, sum=0;
	
	for(int i=0; i<6; i++)
	{
		cin >> a;
		sum += a;
	}
	cout << sum;
    
    return 0;
} 
