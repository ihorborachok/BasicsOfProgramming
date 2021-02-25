#include<iostream> //preprocessor directives
using namespace std;

//entry point
int main2()
{
	/*
	//your code
	//#1
	//cout << "Hello world!"; //string in "hello", char 'a'

	//#2 area of circle
	cout << "R="; //write to console
	float r; //type nameOfVariable, int - integer, float - for real numbers

	cin >> r; //read from the console

	const float pi = 3.14; //const variable
	float S = pi * r * r;
	int a, b = 4, c = -1;

	cout << "S = " << S;
	*/

	/*
	int a;
	cout << "Enter a number:";
	cin >> a;

	if (a > 99 && a < 1000) //1st -> false, no check for 2nd => false
		cout << "3digits number";
	if (a > 99 || a < 1000) //1st -> true, no check for 2nd => true
		cout << "3digits number";
	else if (a > 0)
	{
		//execute only a > 0
		cout << "positive";
		cout << endl << "end";
	}
	else if (a < 0)
		cout << "negative"; //no {} when only 1 operator!!
	else cout << "zero"; //if (a == 0)
	*/

	/*
	//#3. Max....
	int a = 2, b = 3;

	int max;
	if (a > b)
		max = a;
	else
		max = b;

	int max2 = a > b ? a : b; // condition ? resultTrue : resultFalse; 
	bool b1 = true, b2 = false, b3 = a > b, b4 = 7, b5 = -1, b6 = 0;
	cout << b1 <<" " << b2 << b3 << b4 << b5 << b6 << endl;

	if (b3)
		cout << "a > b";
	else
		cout << "b >= a";

	*/

	int n;
	cout << "n=";
	cin >> n;
	/*
	if (n == 1)
		cout << "Mon";
	else if (n == 2)
		cout << "Tue";
	else if (n == 3)
		cout << "Wen";
	//....
	else if (n == 7)
		cout << "Sun";
	else
		cout << "Wrong number";
	*/

	switch (n)
	{
	case 1:
		cout << "Mon";
		cout << "Mon2";
		break;
	case 2:
		cout << "Tue";
		break;
	case 3:
		cout << "Wed";
		break;
	//4, 5, 6
	case 7:
		cout << "Sun";
		break;
	default:
		cout << "Wrong number";
	}

	return 0;
}



/*
namespace std
{
	ostream cout;
}
*/