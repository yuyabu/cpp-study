#include<iostream>
#include<random>
#include<set>
using namespace std;

int main(){
	set<int> numbers;
	cout << "乱数:";
	for(int i=0;i<10;i++){
		int tmp = random()%11;
		cout << tmp << " ";
		numbers.insert(tmp);
	}
	cout << endl;
	set<int>::iterator it;
	
	cout << "出現した数:";
	for(it = numbers.begin(); it != numbers.end(); it++){
		cout << *it << " ";
	}
	cout << endl;

}
