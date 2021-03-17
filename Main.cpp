#include "snowman.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	cout << ariel::snowman(11114411) << endl; 
	cout << ariel::snowman(11111111) << endl; 
	cout << ariel::snowman(12222222) << endl;
	cout << ariel::snowman(33232124) << endl;
	cout << ariel::snowman(33333333) << endl;
	cout << ariel::snowman(21114411) << endl;
	cout << ariel::snowman(13114211) << endl;
	cout << ariel::snowman(12341234) << endl;
	cout << ariel::snowman(43214321) << endl;
	cout << ariel::snowman(33333433) << endl;
	cout << ariel::snowman(41114411) << endl;
	

	
	try {
		cout << ariel::snowman(5) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "The number does not exist"
	}
	
	try {
		cout << ariel::snowman(-12341234) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "The number cannot be a minus"
	}
	
	try {
		cout << ariel::snowman(123412341) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "There are more than 8 numbers"
	}
}