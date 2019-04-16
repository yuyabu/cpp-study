#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector<int> v1;
	vector<string> v2;

	cout << "init status\n " << endl;
	cout << "v1.size() : " << v1.size() << endl;
        cout << "v1.capacity() : " << v1.capacity() << endl;
        cout << "v1.empty() : " << v1.empty() << endl;

	cout << "\nadd elements \n" << endl;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	cout << "v1.size() : " << v1.size() << endl;
	cout << "v1.capacity() : " << v1.capacity() << endl;
	cout << "v1.empty() : " << v1.empty() << endl;
	
	cout << "\nv1.clear();\n" << endl;
	v1.clear();

	cout << "v1.size() : " << v1.size() << endl;
	cout << "v1.capacity() : " << v1.capacity() << endl;
	cout << "v1.empty() : " << v1.empty() << endl;
	
	return 0;
}
