#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
	
	vector<int> v;
	int tmp;

	for(;;){
		cout << "正の整数を入力:";
		cin >> tmp;
		if(tmp == -1) break;
		v.push_back(tmp);
	}

	//iteratorを使って要素を一つずつ取り出し、表示する
	bool non=true;
	for(int i = 0 ; i < 10; i++){
		cout << "一の位が" << i << ":";
		non=true;
		for(int j= 0;j<v.size();j++){
			if(v[j]%10 == i) {
				cout << v[j] << " ";
				non=false;
			}

		}
		if(non) cout << "なし";
		
		cout << endl;
	}
	return 0;
}

