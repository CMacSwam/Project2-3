/*
* File: Project2 - 2
* Author: Chase McCluskey
* Date: 9/5/24
*
* Declaration:Using manip and concertion tools on the user input 
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Enter a measurement in meters: ";
		double user_input;
		cin >> user_input;
		double inches = user_input * 39.370;
		cout << "Converted to inches: " << inches << endl;
		double feet = user_input * 3.280835;
		cout << "Converted to feet: " << feet << endl;
		double miles = user_input / 1609.349;
		cout << "Converted to miles: " << miles << endl;
	
}