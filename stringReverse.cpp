//This Program Reverses a String By Recursion
//Problem Link - https://edabit.com/challenge/HXGx9oXukEgsFK6PH

#include <iostream>
using namespace std;

string returnString = "";

string reverseString(string inputString, int index)
{
	
	if(index == inputString.length()) 
		return returnString;
	else
	{
		reverseString(inputString,index+1);
		returnString += inputString[index];
		return returnString;
	}

}
int main() {
	
	string inputString;
	cin >> inputString;
	cout << reverseString(inputString,0);
	
	return 0;
}
