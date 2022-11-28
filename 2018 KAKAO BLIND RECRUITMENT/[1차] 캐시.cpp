#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool lru(vector<string>& cache,int cacheSize,string target){
	//cache�� �ش� string������ �ش� iterator return, �ƴϸ� end() return
	vector<string>::iterator iter = find(cache.begin(),cache.end(),target);
	
	//cache�� �� ������ ������
	if(cache.size()<cacheSize){
		if(iter==cache.end()){	//cache�ȿ� ���� ��� �׳� ����
			cache.push_back(target);
			return false;
		}else{					//cache�ȿ� ���� ��� �װ� ����� �ڷ� ��
			cache.erase(iter);
			cache.push_back(target);
			return true;
		}
	}

	if(iter==cache.end()){	//cache ��ü�ؾ� �� ��� begin()����� ����
		cache.erase(cache.begin());
		cache.push_back(target);
		return false;
	}else{					//���� ��� �װ� ����� �ڷ� ��
		cache.erase(iter);
		cache.push_back(target);
		return true;
	}
}

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> cache;
    //cacheSize 0�϶� ���� ó��
    if(cacheSize==0) return 5*cities.size();
    
    for(vector<string>::iterator iter=cities.begin();iter<cities.end();iter++){
    	//���� �ҹ��ڷ�
    	transform((*iter).begin(), (*iter).end(), (*iter).begin(), ::tolower);

    	if(lru(cache,cacheSize,(*iter))) answer+=1; //lru�� ��ü �ȵǸ�
    	else answer+=5; //lru�� ��ü�Ǹ�
    }

    return answer;
}
