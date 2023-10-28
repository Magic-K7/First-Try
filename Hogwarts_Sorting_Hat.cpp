//Hogwarts Sorting Hat
#include <iostream>
#include <conio.h>
using namespace std;
void main() {

  int number;

  cout << "\nI am the Hogwarts Sorting Hat.\n\n";
  cout << "Enter a number from 1 to 4 to find out which House you belong to.\n\n";
  cin >> number;

    if (number<1 || number>4)
	{
	 cout << "Invalid input. Please enter a number between 1 and 4.\n";
	}
    else if (number == 1) {
      cout << "You are a member of Hufflepuff\n";
    } 
	else if (number == 2) {
    cout << "You are a member of Gryffindor\n";
    } 
	else if (number == 3) {
    cout << "You are a member of Slytherin\n";
    } 
	else {
      cout << "You are a member of Ravenclaw\n"<<endl; 
     } 
	getch(); 
  }
