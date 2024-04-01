//Nia Kochadze 
//Automated Greenhouse
//3/19/2024
#include<string>
#include<iostream>
#include<random>

using std::cin;
using std::cout;
using std::endl;
using std::string;


//One function capable of detecting and adjusting the current and target conditions of input values
//for actual greenhouse aplications outside of the simulated green house utilizing randomly generated values for each condition 
//the float condition_in would be a float sensor_in which would directly gather the data gathered by the specific sensors from the greenhouse and the function would
//work fine as long as a person first input the targeted condition, the name and notation if needed but it would only need a current and target conditions to function as intended

int fix_condition(float condition_in, float optimal_condition, string name_condition, string notation) {
	cout << endl;
	cout << "===============================================================================" << endl;

	cout << "Optimal "<<name_condition << ":" << optimal_condition << "\n" << endl;

	if (condition_in < optimal_condition) {
		cout << name_condition << " is " << optimal_condition - condition_in << " Lower than Requiered" << endl;
		cout << "Adjusting By: " << optimal_condition - condition_in << notation << endl;

		cout << endl;


	} 

	else if (condition_in > optimal_condition) {
		cout << name_condition <<" is " << condition_in - optimal_condition << " Lower than Requiered" << endl;
		cout << "Adjusting By: -" << condition_in - optimal_condition << notation << endl;

		cout << endl;

	}
	else {
		cout << "Curently Detected Optimal " << name_condition << ": " << optimal_condition << endl;
	}
	return optimal_condition;
}


int main() {
	//accessing system 
	cout << "Enter Greenhouse Automated System" << endl << "(1)Enter System        (0)Exit" << endl;
	int n; 
	cin >> n;
	

	if (n == 0) {
		cout << "Goodbye" << endl;
		return 0;
	}
	else if (n == 1) {
		cout << "Welcome" << endl;
	}
	while (n == 1) {

		//create random values from 0-100 for each variable/constraint

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> distr(0, 100);
		std::uniform_int_distribution<> distr_gallons(0, 1);
		std::uniform_int_distribution<> distr_lux(0, 200000);

		
		int temp_lvl = distr(gen);
		int humid_lvl = distr(gen);
		int water_lvl = distr_gallons(gen);
		int nutrient_lvl = distr(gen);
		int light_lvl = distr_lux(gen);

		cout << "\n\nCurrent Green House Data\n-----------------------------------\nTemperature (F): " << temp_lvl << endl << "Humidity (%): " << humid_lvl << endl << "Water (Gallons): " << water_lvl << endl << "Nutrients (%): " << nutrient_lvl << endl << "Light (luz):" << light_lvl << endl;


		temp_lvl = fix_condition(temp_lvl, 80, "Temperature (*C)", "*C");
		humid_lvl = fix_condition(humid_lvl, 80, "% Humidity", "%");
		water_lvl = fix_condition(water_lvl, .4, "Galons)", "Gal");
		nutrient_lvl = fix_condition(nutrient_lvl, 100, "% Nutrition", "%");
		light_lvl = fix_condition(light_lvl, 130000, "Light", "Lux");


		cout << "\n\nAdjusted Green House Data\n-----------------------------------\nTemperature (F): " << temp_lvl << endl << "Humidity (%): " << humid_lvl << endl << "Water (Gallons): " << water_lvl << endl << "Nutrients (%): " << nutrient_lvl << endl << "Light (luz):" << light_lvl << endl;



		if (n == 1) {
			return 0;
		}

		//Green house Target 
		//temperature 80F
		//Humidity 80%
		//water: .4 gallons
		//nutrients: 100%
		//light: 130,000lux

		// Check Temperature







		//display current temp, humidity, water level, nurtients, light levels

		

		

	}






	return(0);
}