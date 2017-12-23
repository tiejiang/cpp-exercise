#include <iostream>

using namespace std;

#define CIRCLE 5
#define LENGTH 8

enum day{
	monday,
	tuesday,
	wensday,
	thursday
}daytime;

int main(){
	
	//enum 
	//for(int i=0; i<4; i++){
	//	cout<< "daytime= "<< daytime<< endl;
	//}
	day dayvalue;
	dayvalue = tuesday;
	cout<< dayvalue<< endl;
	//cout<< tuesday << endl;

	cout<< "erath= "<< CIRCLE*CIRCLE*LENGTH<< endl;
	return 0;
}
