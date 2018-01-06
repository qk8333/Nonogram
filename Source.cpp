#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;

string messedUp;
int selection;
string buf;													//holds a line of data from the file
ifstream dataFile;											//used to open the file(select a puzzle)

struct puzzle
{
	bool solution[4][4];									//the solution grid. This should only change when first created. Or if a new puzzle starts.
	bool gridState[4][4];									//the player grid. This should hold the data for the current game. A graphical depiction should be built.
	void setup()											//sets up a clear starting grid. Needs to create a solution as well.
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
				gridState[i][j] = false;					//the line that actually ensures that the player grid starts blank.
		};
	};
	bool isSolved()
	{
	};

};



int main()
{
	puzzle game;
	cout << "Please select a number between 1 and 1: ";		//picking a puzzle. Only 1 exists so far.
	cin >> selection;
	cout << endl << "Okay! Here goes..." << endl;
	if (selection == 1)										//a placeholder for a better puzzle selection system.
		dataFile.open("samplePuzzle.txt");
	else													//for smart alecs who didn't select 1.
	{
		cout << "no. nonono. It failed. Sorry, eh?" << endl << "press something and then enter to leave. sorry again. ";
		cin >> messedUp;
		return 0;
	};											
	dataFile.open(buf);
	return 0;
}