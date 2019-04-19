#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
	map <string, int> score;
	string name[] = { "Tom","Bob","Mike"};
	score[name[0]] = 100;
	score[name[1]] = 80;
	score[name[2]] = 120;
	
	int i;
	for(i = 0; i< 3; i++){
		cout << name[i] << ":" << score[name[i]] << endl;
	}
	return 0;
}
