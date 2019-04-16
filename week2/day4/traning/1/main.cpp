#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
	
	vector<int> odd;
	vector<int> evn;
	int tmp;

	for(;;){
		cout << "正の整数を入力:";
		cin >> tmp;
		if(tmp == -1) break;
		if(tmp %2 == 0){
			evn.push_back(tmp);
		}else{
			odd.push_back(tmp);
		}	

	}

	//iteratorを使って要素を一つずつ取り出し、表示する
		
	cout << "偶数:";	
	for (int i = 0; i < evn.size(); i++){
		cout << evn[i] << " ";	
	}
	cout << endl;

	cout << "奇数:";	
	for (int i = 0; i < odd.size(); i++){
		cout << odd[i] << " ";	
	}
	cout << endl;
	return 0;
}

