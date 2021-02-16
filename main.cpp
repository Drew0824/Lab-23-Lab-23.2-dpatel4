#include <iostream>
using namespace std;

int main() {
  const int MAX_SIZE = 100;
  int grades[MAX_SIZE]; // max number of grades inputed
  int numberOfGrades; // the number of grades read.
  int pos;

  // Read in the values into the array
  pos = 0;
  cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl; 

  cin >> grades[pos];
  while (grades[pos] != -99) //this just states that if -99 is enterted then it stops the console.
  {
    pos++;
    cin >> grades[pos]; // this stores all the grades inputted in order.
  } 

  numberOfGrades = pos;

  cout << "You entered " << numberOfGrades << " grades:\n";

  int sum = 0;
  int average = 0;
  int highest = 0;
  int lowest = 0;
  cout << endl;
  for (int i = 0; i < numberOfGrades; i++)
  {
    cout << "Element " << i+1 << " is " << grades[i] << endl; // this the output off all the grades inputted in order.
    sum = sum + grades[i]; // this is the calculation of the sum of all the grades inputted.
    average = sum / numberOfGrades;
  }

  cout << "The sum of the " << numberOfGrades << " numbers is " << sum << endl; 

  cout << "The average of the " << numberOfGrades <<" numbers is " << average << endl;

  cout <<"The highest grade entered is " << highest << endl;

  cout << "The lowest grade entered is " << lowest << endl;
}