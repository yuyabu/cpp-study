#ifndef _FIGHTERAIRCRAFT_H_
#define _FIGHTERAIRCRAFT_H_

using namespace std;

class FighterAircraft{
	private:
		string m_type;
	public:
		FighterAircraft();
		string getType();
		void fly();
		void fight();
};

#endif // _FIGHTERAIRCRAFT_H_
