#include <iostream>
using namespace std;

int main(void) {



	cout << "Welcome to X-O Game:\n\n";

	string first = "1";
	string second = "2";
	string third = "3";

	cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
	cout << "|\t \t|\t \t|\t \t|\n";
	cout << "-------------------------------------------------\n";

	string fourth = "4";
	string fifth = "5";
	string sixth = "6";

	cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
	cout << "|\t \t|\t \t|\t \t|\n";
	cout << "-------------------------------------------------\n";

	string seventh = "7";
	string eighth = "8";
	string ninth = "9";

	cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
	cout << "|\t \t|\t \t|\t \t|\n";
	cout << "-------------------------------------------------\n";

	while (1 != 2) {
		int x;
		cout << "\nX turn: ";
		cin >> x;

		cout << endl;

		if (x == 1) {
			if (first == "O") {
				cout << "This place for O, you can not put X here!\n";
				return 0;
			}

			first = "X";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (x == 2) {
			if (second == "O") {
				cout << "This place for O, you can not put X here!\n";
				return 0;
			}
			second = "X";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (x == 3) {
			if (third == "O") {
				cout << "This place for O, you can not put X here!\n";
				return 0;
			}
			third = "X";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (x == 4) {
			if (fourth == "O") {
				cout << "This place for O, you can not put X here!\n";
				return 0;
			}
			fourth = "X";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (x == 5) {
			if (fifth == "O") {
				cout << "This place for O, you can not put X here!\n";
				return 0;
			}
			fifth = "X";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (x == 6) {
			if (sixth == "O") {
				cout << "This place for O, you can not put X here!\n";
				return 0;
			}
			sixth = "X";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (x == 7) {
		if (seventh == "O") {
			cout << "This place for O, you can not put X here!\n";
			return 0;
		}
			seventh = "X";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (x == 8) {
		if (eighth == "O") {
			cout << "This place for O, you can not put X here!\n";
			return 0;
		}
			eighth = "X";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (x == 9) {
		if (ninth == "O") {
			cout << "This place for O, you can not put X here!\n";
			return 0;
		}
			ninth = "X";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else {
			cout << "You can only choose numbers from 1 to 9.\n";
			return 0;
		}

		if (first == "X" && second == "X" && third == "X" || fourth == "X" && fifth == "X" && sixth == "X" || seventh == "X" && eighth == "X" && ninth == "X" || first == "X" && fourth == "X" && seventh == "X" || second == "X" && fifth == "X" && eighth == "X" || third == "X" && sixth == "X" && ninth == "X" || first == "X" && fifth == "X" && ninth == "X" || third == "X" && fifth == "X" && seventh == "X") {
			cout << "\nX is win.\n";
			return 0;
		}

		int o;
		cout << "\nO turn: ";
		cin >> o;

		cout << endl;

		if (o == 1) {
			if (first == "X") {
				cout << "This place for X, you can not put O here!\n";
				return 0;
			}
			first = "O";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (o == 2) {
			if (second == "X") {
				cout << "This place for X, you can not put O here!\n";
				return 0;
			}
			second = "O";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (o == 3) {
			if (third == "X") {
				cout << "This place for X, you can not put O here!\n";
				return 0;
			}
			third = "O";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (o == 4) {
			if (fourth == "X") {
				cout << "This place for X, you can not put O here!\n";
				return 0;
			}
			fourth = "O";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (o == 5) {
			if (fifth == "X") {
				cout << "This place for X, you can not put O here!\n";
				return 0;
			}
			fifth = "O";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (o == 6) {
			if (sixth == "X") {
				cout << "This place for X, you can not put O here!\n";
				return 0;
			}
			sixth = "O";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (o == 7) {
		if (seventh == "X") {
			cout << "This place for X, you can not put O here!\n";
			return 0;
		}
			seventh = "O";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (o == 8) {
		if (eighth == "X") {
			cout << "This place for X, you can not put O here!\n";
			return 0;
		}
			eighth = "O";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else if (o == 9) {
		if (ninth == "X") {
			cout << "This place for X, you can not put O here!\n";
			return 0;
		}
			ninth = "O";

			cout << "|\t" << first << "\t|\t" << second << "\t|\t" << third << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << fourth << "\t|\t" << fifth << "\t|\t" << sixth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";

			cout << "|\t" << seventh << "\t|\t" << eighth << "\t|\t" << ninth << "\t|\n";
			cout << "|\t \t|\t \t|\t \t|\n";
			cout << "-------------------------------------------------\n";
		}
		else {
			cout << "You can only choose numbers from 1 to 9.\n";
			return 0;
		}

		if (first == "O" && second == "O" && third == "O" || fourth == "O" && fifth == "O" && sixth == "O" || seventh == "O" && eighth == "O" && ninth == "O" || first == "O" && fourth == "O" && seventh == "O" || second == "O" && fifth == "O" && eighth == "O" || third == "O" && sixth == "O" && ninth == "O" || first == "O" && fifth == "O" && ninth == "O" || third == "O" && fifth == "O" && seventh == "O") {
			cout << "\nO is win.\n";
			return 0;
		}

	}

	return 0;
}
