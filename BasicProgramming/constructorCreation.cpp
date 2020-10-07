#include <iostream>

using namespace std;

enum MealType {NO_PREF, REGULAR, LOW_FAT, VEG, NON_VEG};

class Passenger {
public:
	Passenger();
	Passenger(const string& nm, MealType mp, const string& ffn="NONE");
	Passenger(const Passenger& pass);
	void showPassengerData();
private:
	string name;
	MealType mealPref;
	bool isFreqFlyer;
	string freqFlyerNo;
};

Passenger::Passenger(){
	name = "--NO NAME--";
	mealPref = NO_PREF;
	isFreqFlyer = false;
	freqFlyerNo = "NONE";
}

Passenger::Passenger(const string& nm, MealType mp, const string& ffn){
	name = nm;
	mealPref = mp;
	isFreqFlyer = (ffn != "NONE");
	freqFlyerNo = ffn;
}

Passenger::Passenger(const Passenger& pass){
	name = pass.name;
	mealPref = pass.mealPref;
	isFreqFlyer = pass.isFreqFlyer;
	freqFlyerNo = pass.freqFlyerNo;
}

void Passenger::showPassengerData(){
	cout<<"Name: "<<name<<", Meal Preference: "<<mealPref;
	if(isFreqFlyer){
		cout<<", Frequent Flyer No: "<<freqFlyerNo<<endl;
	}
	else{
		cout<<", Frequent Flyer No: NONE"<<endl;
	}
}

int main(int argc, char** argv) {
	Passenger p1;
	Passenger p2("Aayush Pant", LOW_FAT, "DC1234");
	Passenger p3("Alok Anand", NON_VEG);
	Passenger *pp1 = new Passenger;
	Passenger *pp2 = new Passenger("Bikiron Bora", REGULAR, "MV9876");
	p1.showPassengerData();
	p2.showPassengerData();
	p3.showPassengerData();
	pp1->showPassengerData();
	pp2->showPassengerData();
	return EXIT_SUCCESS;
}

