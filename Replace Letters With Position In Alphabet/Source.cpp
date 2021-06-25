#include <iostream>
#include<string>

using namespace std;
//Create a function that takes a stringand replaces each letter with its appropriate position in the alphabet. 
//"a" is 1, "b" is 2, "c" is 3, etc, etc.

// test cases
//alphabetIndex("Wow, does that work?")
//➞ "23 15 23 4 15 5 19 20 8 1 20 23 15 18 11"
//
//alphabetIndex("The river stole the gods.")
//➞ "20 8 5 18 9 22 5 18 19 20 15 12 5 20 8 5 7 15 4 19"
//
//alphabetIndex("We have a lot of rain in June.")
//➞ "23 5 8 1 22 5 1 12 15 20 15 6 18 1 9 14 9 14 10 21 14 5"

void alphabetIndex(string sentence)
{

	int size = sentence.size();
	for (int i = 0; i < size; i++)
	{
	
		if (int(sentence[i]) >= 65 && int(sentence[i]) <= 90)
		{
			cout << (int(sentence[i]) - 64)<<" ";
		}
		else if (int(sentence[i]) >= 97 && int(sentence[i]) <= 122)
		{
			cout << (int(sentence[i]) - 96) << " ";
		}
	}
	cout << endl;
}
int main()
{
	string input;

	cout << "Please enter a string " << endl;
	getline(cin, input);

	cout << "THe user input is: "<<input << endl;
	alphabetIndex(input);
		system("PAUSE");

}