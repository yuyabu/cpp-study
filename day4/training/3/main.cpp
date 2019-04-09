#include<iostream>

using namespace std;

int main(){
	int *num = new int[4];
	int i;
	
	for (i = 0; i< 4; ++i){
		num[i] = i;
	}

	for(int j= 0 ; j< 4;j++){
		cout << "num[" << j << "]=" << num[j] << " ";
	}
	delete [] num;
	cout << endl;
	return 0;	
} 
