#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <map> 

using namespace std;

/*
	
	�˰��� ���� Ǯ�̸� ���� ���� �˰��� �� �Լ�����
	������ ���� ����

	���� Ǯ�̸� �ϸ� ����� �Լ��� �˰����� ������ �ִ�. 

*/

// ���ڿ� Split
vector<string> Split(const string& text)
{
	vector<string> result;
	string stringBuffer;
	istringstream ss(text);

	while (getline(ss, stringBuffer, ' '))
	{
		result.emplace_back(stringBuffer);
	}

	return result;
}

// auto Ű����
void Auto()
{

	auto a1 = 10; // int Ÿ��
	auto a2 = 10.0f; // float Ÿ��
	auto a3 = "c"; // char Ÿ��
	auto a4 = "BlockDMask"; // string Ÿ��
	auto a5 = { 10, 20, 30 }; // int �迭 Ÿ��

}