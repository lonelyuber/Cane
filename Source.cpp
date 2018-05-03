#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

void RandomColor();
char Map();

int main() {
	string name; // User's name
	string inventory[7];
	string userinput;
	int saveddata;

	ifstream save;
	save.open("save.txt");
	save >> saveddata;
	save.close();

	bool shank = false;
	/////// Game Introduction
	system("COLOR D");
	for (int i = 0; i < 20; i++)
		cout << " " << '\n';

	cout << "                                                           |\\___..--/ " << '\n';
	cout << "                                                  __..--`` Cane.   / " << '\n';
	cout << "                                                  \\_______________/ " << '\n';

	for (int i = 0; i < 20; i++)
		cout << " " << '\n';

	cout << "Press Enter to Continue" << endl;
	cin.ignore();

	system("COLOR D");
	cout << "What is your name?" << endl;
	getline(cin, name);
	system("CLS");

	cout << "Nice to meet you " << name << endl;
	cout << "Welcome to Cane!" << endl;
	cout << "You are here in Gustin's main deck." << endl;
	cout << "To pull up the map enter 'Map'" << endl;
	system("pause");
	system("CLS");

	// Rooms
	char input = 'A';
	int room = 1;

	do {
		//Loading Save Data
		cout << "Would you like to load your saved data?" << endl;
		cout << "y / n" << endl;
		getline(cin, userinput);

		if (userinput.compare("y") == 0) {
			room = saveddata;
			cout << "Loaded." << endl;
		}

		if (userinput.compare("n") == 0)
			room = 1;

		else if (userinput != "y" && userinput != "n") {
			cout << "Option not recognized." << endl;
			cin.ignore();
		}

	} while (userinput != "y" && userinput != "n");

	while (userinput.compare("quit") != 0) {
		switch (room) {

		case 1: // Main Deck
			RandomColor();
			system("CLS");
			cout << "*Location - Main Deck" << endl;
			cout << endl;
			cout << "Input next move (use 'map' for info)." << endl;
			// get user input
			getline(cin, userinput); {
				Sleep(1);
				if (userinput.compare("1st class") == 0)
					room = 5;
				if (userinput.compare("bathroom") == 0)

					room = 7;

				if (userinput == "Map" || userinput == "map") // Map
					cout << Map();
				system("pause");
			}
			break;

		case 2: // Stern
			RandomColor();
			system("CLS");
			cout << "You are now at the Stern" << endl;
			cout << endl;
			// ADD INVENTORY 
			if (shank == true) {
				cout << "You got a shank" << endl;
				inventory[1] = "shank";
			}
			shank = true;
			getline(cin, userinput); {
				Sleep(1);
				if (userinput.compare("lobby") == 0)
					room = 3;
				if (userinput.compare("boiler") == 0)
					room = 10;

				if (userinput == "Map" || userinput == "map") // Map
					cout << Map();
				system("pause");
			}
			break;

		case 3: // Lobby
			RandomColor();
			system("CLS");
			cout << "Welcome to the lobby." << endl;
			cout << endl;
			getline(cin, userinput); {
				Sleep(1);
				if (userinput.compare("stern") == 0)
					room = 2;
				if (userinput.compare("2nd class") == 0)
					room = 6;

				if (userinput == "Map" || userinput == "map") // Map
					cout << Map();
				system("pause");
			}
			break;

		case 4: // Officer Quarters
			RandomColor();
			system("CLS");
			cout << "Officer quarters" << endl;
			cout << endl;
			getline(cin, userinput); {
				Sleep(1);
				if (userinput.compare("lobby") == 0)
					room = 3;
				if (userinput.compare("2nd class") == 0)
					room = 6;
				if (userinput.compare("captain's room") == 0)
					room = 8;

				if (userinput == "Map" || userinput == "map") // Map
					cout << Map();
				system("pause");
			}
			break;

		case 5: // 1st Class Cabins
			RandomColor();
			system("CLS");
			cout << "1st class" << endl;
			cout << endl;
			getline(cin, userinput); {
				Sleep(1);
				if (userinput.compare("bathroom") == 0)
					room = 7;
				if (userinput.compare("captain's room") == 0)
					room = 8;

				if (userinput == "Map" || userinput == "map") // Map
					cout << Map();
				system("pause");
			}
			break;

		case 6: // 2nd Class Cabins
			RandomColor();
			system("CLS");
			cout << "Lower class" << endl;
			cout << endl;
			getline(cin, userinput); {
				Sleep(1);
				if (userinput.compare("cargo") == 0)
					room = 9;
				if (userinput.compare("boiler") == 0)
					room = 10;

				if (userinput == "Map" || userinput == "map") // Map
					cout << Map();
				system("pause");
			}
			break;

		case 7: // Bathroom
			RandomColor();
			system("CLS");
			cout << "Gender-neutral bathroom " << endl;
			cout << endl;
			getline(cin, userinput); {
				Sleep(1);
				if (userinput.compare("stern") == 0)
					room = 2;
				if (userinput.compare("1st class") == 0)
					room = 5;

				if (userinput == "Map" || userinput == "map") // Map
					cout << Map();
				system("pause");
			}
			break;

		case 8: // Captain's room
			RandomColor();
			system("CLS");
			cout << "Aye aye captain " << endl;
			cout << "'Greetings' - Captain Gustin" << endl;
			cout << endl;
			getline(cin, userinput); {
				Sleep(1);
				if (userinput.compare("officer quarters") == 0)
					room = 4;
				if (userinput.compare("1st class") == 0)
					room = 5;

				if (userinput == "Map" || userinput == "map") // Map
					cout << Map();
				system("pause");
			}
			break;

		case 9: // Cargo Room
			RandomColor();
			system("CLS");
			cout << "Aye it's me cargo" << endl;
			cout << endl;
			getline(cin, userinput); {
				Sleep(1);
				if (userinput.compare("boiler") == 0)
					room = 10;

				if (userinput == "Map" || userinput == "map") // Map
					cout << Map();
				system("pause");
			}
			break;

		case 10: // Boiler room
			RandomColor();
			system("CLS");
			cout << "*coal burning*" << endl;
			cout << "What do you want??" << endl;
			cout << endl;
			getline(cin, userinput); {
				Sleep(1);
				if (userinput.compare("stern") == 0)
					room = 2;
				if (userinput.compare("cargo") == 0)
					room = 9;

				if (userinput == "Map" || userinput == "map") // Map
					cout << Map();
				system("pause");
			}
			break;

		}//end switch
	}//end game loop
	ofstream saving;
	saving.open("save.txt");
	saving << room;
	saving.close();
	cout << "Your data is saved." << endl;
	system("pause");

	return 0;

}//------------------------------------------------- end main

 // Map
char Map()
{
	cout << endl;
	cout << "S.S. Cane Map" << '\n';
	cout << endl;
	system("COLOR D");
	// Main Deck
	cout << "Main deck" << '\n';
	cout << "   -> Bathroom" << '\n';
	cout << "   -> 1st class" << '\n';

	// Lobby
	cout << "Lobby" << '\n';
	cout << "   -> 2nd Class" << '\n';
	cout << "   -> Stern" << '\n';

	// Stern
	cout << "Stern" << '\n';
	cout << "   -> Lobby" << '\n';
	cout << "   -> Boiler Room" << '\n';

	//Office Quarters
	cout << "Officer Quarters" << '\n';
	cout << "   -> Captain's room" << '\n';
	cout << "   -> Lobby" << '\n';
	cout << "   -> 2nd Class" << '\n';

	// 1st Class
	cout << "1st class" << '\n';
	cout << "   -> Bathroom" << '\n';
	cout << "   -> Captain's room" << '\n';

	// 2nd Class
	cout << "2nd class" << '\n';
	cout << "   -> Boiler" << '\n';
	cout << "   -> Cargo" << '\n';

	// Bathroom
	cout << "Bathroom" << '\n';
	cout << "   -> Stern" << '\n';
	cout << "   -> 1st Class" << '\n';

	// Captain's Room
	cout << "Captain's Room" << '\n';
	cout << "   -> Office Quarters" << '\n';
	cout << "   -> 1st Class" << '\n';

	// Cargo Room
	cout << "Cargo Room" << '\n';
	cout << "   -> Boiler" << '\n';

	// Boiler Room
	cout << "Boiler Room" << '\n';
	cout << "   -> Stern" << '\n';
	cout << "   -> Cargo" << '\n';
	cout << endl;
	return 0;
}

// Random Color Gen
void RandomColor()
{
	int color = rand() % 6 + 1;

	switch (color)
	{

	case 1:
		system("COLOR 3");
		break;

	case 2:
		system("COLOR A");
		break;

	case 3:
		system("COLOR B");
		break;

	case 4:
		system("COLOR D");
		break;

	case 5:
		system("COLOR E");
		break;

	case 6:
		system("COLOR F");
		break;

	case 7:
		system("COLOR 6");
		break;
	}  //end switch
}  //end function rand color 
