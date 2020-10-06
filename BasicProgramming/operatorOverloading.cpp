#include <iostream>

using namespace std;

enum MealType {NO_PREF, REGULAR, LOW_FAT, VEG, NON_VEG};

struct Passenger {
	string name;
	MealType mealPref;
	bool isFreqFlyer;
	string freqFlyerNo;
};

ostream& operator<<(ostream& out, const Passenger &pass){
	out<<pass.name<<" "<<pass.mealPref;
	if(pass.isFreqFlyer){
		out<< " "<<pass.freqFlyerNo;
	}
	return out;
}

int main(int argc, char** argv) {
	Passenger pass;
	pass.name="Aayush Pant";
	pass.mealPref=LOW_FAT;
	pass.isFreqFlyer=true;
	pass.freqFlyerNo="D28617";
	cout<<pass;
	return EXIT_SUCCESS;
}
