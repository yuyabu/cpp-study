#include<iostream>
#include<list>

using namespace std;


int main(){
	int tmp;
	list<int> l;
	list<int>::iterator itr;
	for(;;){
		cout << "正の数を入力:";
		cin>>tmp;
		if(tmp == -1) break;
		if(l.empty()){
			l.push_back(tmp);
		}else{
			for( itr = l.begin(); itr != l.end(); ++itr){
				if(tmp < *itr){
					itr = l.insert(itr,tmp);
					++itr;
					break;
				}
			}
			if (itr == l.end()){
				l.push_back(tmp);
			}
		}
		
		for( itr = l.begin(); itr != l.end(); ++itr){
			cout << *itr << " ";
		}
		cout << endl;
	}

}
