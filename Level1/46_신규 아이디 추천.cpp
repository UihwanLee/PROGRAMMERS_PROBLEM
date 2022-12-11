#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string GET_NEW_ID(string new_id){
    // 1�ܰ� new_id�� ��� �빮�ڸ� �����Ǵ� �ҹ��ڷ� ġȯ�մϴ�.
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
    // 2�ܰ� new_id���� ���ĺ� �ҹ���, ����, ����(-), ����(_), ��ħǥ(.)�� ������ ��� ���ڸ� �����մϴ�.
    for(auto idx = 0; idx < new_id.size(); ++idx)
    {
        auto& new_id_char = new_id.at(idx);
        if(!islower(new_id_char) &&
           !isdigit(new_id_char) &&
           (new_id_char != '-') &&
           (new_id_char != '_') &&
           (new_id_char != '.'))
        {
            new_id.erase(idx--, 1);
        }
    }
    // 3�ܰ� new_id���� ��ħǥ(.)�� 2�� �̻� ���ӵ� �κ��� �ϳ��� ��ħǥ(.)�� ġȯ�մϴ�.
    size_t position = 0;
    while((position = new_id.find("..")) != string::npos)
    {
        new_id.replace(position, 2, ".");
    }
    // 4�ܰ� new_id���� ��ħǥ(.)�� ó���̳� ���� ��ġ�Ѵٸ� �����մϴ�.
    if(new_id.front() == '.')
    {
        new_id.erase(new_id.begin());
    }
    if(new_id.back() == '.')
    {
        new_id.pop_back();
    }
    // 5�ܰ� new_id�� �� ���ڿ��̶��, new_id�� "a"�� �����մϴ�.
    if(new_id.empty())
    {
        new_id = "a";
    }
    // 6�ܰ� new_id�� ���̰� 16�� �̻��̸�, new_id�� ù 15���� ���ڸ� ������ ������ ���ڵ��� ��� �����մϴ�. ���� ���� �� ��ħǥ(.)�� new_id�� ���� ��ġ�Ѵٸ� ���� ��ġ�� ��ħǥ(.) ���ڸ� �����մϴ�.
    if(new_id.size() >= 16)
    {
        new_id = new_id.substr(0, 15);
        if(new_id.back() == '.')
        {
            new_id.pop_back();
        }
    }
    // 7�ܰ� new_id�� ���̰� 2�� ���϶��, new_id�� ������ ���ڸ� new_id�� ���̰� 3�� �� ������ �ݺ��ؼ� ���� ���Դϴ�.
    while(new_id.size() < 3)
    {
        new_id.push_back(new_id.back());
    }
    return new_id;
}

string solution(string new_id) {
    string answer = "";
    answer = GET_NEW_ID(new_id);
    return answer;
}
