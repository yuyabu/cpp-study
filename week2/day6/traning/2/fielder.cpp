#include "fielder.h"
 
Fielder::Fielder(string name,int number) 
{
    m_name = name;
    m_number = number;
    m_kind = "フィールドプレイヤー";
}
//  ピッチャーがプレイする
void Fielder::play()
{
    cout << "フィールドプレーヤーがプレイする" << endl;
}
