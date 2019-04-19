#include<iostream>
#include<list>
#include<string>

using namespace std;

int main(){
	list<string> l;
	list<string>::iterator li;
	string tmp;
	for(;;){
		cout << "文字を入力:";
		getline(cin,tmp);
		if(tmp.empty()) break;
		l.push_back(tmp);

	}
	for(li = l.begin(); li != l.end(); li++){
		if((*li).length() >= 5) {
			cout << *li << " remove " << endl;
			l.remove(*li);
			li++;
		}
	}
	
	for(li = l.begin(); li != l.end(); li++){
		cout << *li << " ";
	}
	cout << endl;
}
