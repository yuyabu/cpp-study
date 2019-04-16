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
	
	int max=v[0];
	int min=v[0];	
	for (int i = 0; i < v.size(); i++){
		if(v[i] < min) {
			min = v[i];
		}else if(v[i] > max){
			max = v[i];
		}	
	}
	
	cout << "最大値" << max;
	cout << "最小値" << min;	
	return 0;
}

