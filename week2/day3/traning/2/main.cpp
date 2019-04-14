#include <iostream>
#include "collection.h"
 
using namespace std;
 
int main(){

//  配列変数の定義
    double array[] = { 1.2,3.5,8.1,4.9,2.9,2.2 };
    Collection<double>* cr = new Collection<double>(array,5);
    cout << "実数の場合" << cin;
    cr->showArray();
    cout << "最大値 : " << cr->getMax() << endl;
    cout << "最小値 : " << cr->getMin() << endl;
    delete cr;

    //  配列変数の定義
    int array2[] = { 1,5,4,2,3 };
    Collection<int>* c = new Collection<int>(array2,5);
    cout << "整数の場合" << cin;
    c->showArray();
    cout << "最大値 : " << c->getMax() << endl;
    cout << "最小値 : " << c->getMin() << endl;
    delete c;
    return 0;
}
