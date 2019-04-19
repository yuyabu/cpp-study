#include<iostream>
#include<list>

using namespace std;

int main(){
	//-1まで入力を受けいれる
	//入力された数のうち2以外を全て表示する
	//値の格納はlistに入れる
	//削除はremoveメソッドで行う

	list<int> lis;
	int tmp;
	for(;;){
		cout << "正の整数を入力:";
		cin>>tmp;
		if(tmp == -1) break;
		lis.push_back(tmp);
	}
	
	lis.remove(2);
	list<int>::iterator li;
			
	
	for (li = lis.begin(); li != lis.end(); li++){
		cout << *li << " " ;
	}
	cout << endl;
	return 0;
}
	
