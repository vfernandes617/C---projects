// OOP Submission Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



class Dog
{
private:
	string Breed;
	int Height;
	int Weight;
	string Color;

public:
	Dog(string dogBreed, int dogHeight, int dogWeight, string dogColor) : Breed(dogBreed), Height(dogHeight), Weight(dogWeight), Color(dogColor) {}

	//Behaviors

	void Shake()
	{
		cout << Breed << "This dog shakes its tail this way" << endl;
	}
	void Sit()
	{
		cout << "Sit!" << endl;
	}
	void layDown()
	{
		cout << "Lay down!" << endl;
	}

};

int main() {
	// Create instances of Dog
	
	Dog myDog("Golden Retriever", 5,2, "Gold");

	cout << endl;

	// Display Dog info and behaviors
	myDog.Shake();
	myDog.Sit();
	myDog.layDown();

	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
