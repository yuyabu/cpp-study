#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
	vector<string> v;
	string tmp;
	for(;;){
		cout << "文字列を入力:";
		getline(cin,tmp);
		cout << tmp << endl;
		if(tmp.empty()) break;
		v.push_back(tmp);
	}
	string max = v[0];
	string min = v[0];
	for(int i=1;i<v.size();i++){
		if (max.length() < v[i].length()) max = v[i];
		if (min.length() > v[i].length()) min = v[i];
	}
	cout << "最長の単語:" << max << endl;
	cout << "最短の単語:" << min << endl;
	return 0;
}
