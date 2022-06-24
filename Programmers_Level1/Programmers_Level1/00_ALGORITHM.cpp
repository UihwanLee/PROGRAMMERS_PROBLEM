#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <map> 

using namespace std;

/*
	
	알고리즘 문제 풀이를 위한 여러 알고리즘 및 함수들을
	정리한 문서 파일

	문제 풀이를 하며 사용한 함수나 알고리즘을 가지고 있다. 

*/

// 문자열 Split
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

// auto 키워드
void Auto()
{

	auto a1 = 10; // int 타입
	auto a2 = 10.0f; // float 타입
	auto a3 = "c"; // char 타입
	auto a4 = "BlockDMask"; // string 타입
	auto a5 = { 10, 20, 30 }; // int 배열 타입

}