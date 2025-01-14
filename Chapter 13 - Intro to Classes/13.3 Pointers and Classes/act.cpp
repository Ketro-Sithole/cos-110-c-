//This program creates three instances of the Rectangle class->
#include <iostream>

using namespace std;

//Rectangle class declaration->
class Rectangle
{
	private:
		double width;
		double length;

	public:
		void setWidth (double);
		void setLength (double);
		double getWidth () const;
		double getLength () const;
		double getArea () const;
};


//*****************************************************
/*
	setWidth assigns a value to the width member->
*/
//*****************************************************


void Rectangle::setWidth(double w)
{
	width = w;
}


//*****************************************************
/*
	setLength assigns a value to the length member->
*/
//*****************************************************


void Rectangle::setLength(double l)
{
	length = l;
}


//*****************************************************
/*
	getWidth returns the value in the width member->
*/
//*****************************************************


double Rectangle::getWidth () const
{
	return width;
}


//*****************************************************
/*
	getLength returns the value in the length member->
*/
//*****************************************************


double Rectangle::getLength() const
{
	return length;
}


//****************************************************************
/*
	getArea returna the product of the length times the width->
*/
//****************************************************************


double Rectangle::getArea() const
{
	return width * length;
}


//Function main
int main()
{
	Rectangle *kitchen = nullptr;					//To hold point dimensions
	Rectangle *bedroom = nullptr;					//To hold point dimensions
	Rectangle *den = nullptr;						//To point den dimensions
	double number;									//To hold a number
	double totalArea;								//The total area

	//Get the kitchen dimensions
	cout << "What is the kitchen's length? ";
	cin >> number;									//Get the length
	kitchen->setLength(number);						//Store in kitchen object
	cout << "What is the kitchen's width? ";
	cin >> number;									//Get the width
	kitchen->setWidth(number);						//Store in the kitchen object

	//Get the bedroom dimensions
	cout << "What is the bedroom's length? ";
	cin >> number;									//Get the length
	bedroom->setLength(number);						//Store in bedroom object
	cout << "What is the bedroom's width? ";
	cin >> number;									//Get the width
	bedroom->setWidth(number);						//Store in the bedroom object

	//Get the den dimensions
	cout << "What is the den's length? ";
	cin >> number;									//Get the length
	den->setLength(number);							//Store in den object
	cout << "What is the den's width? ";
	cin >> number;									//Get the width
	den->setWidth(number);							//Store in the den object


	//Calculate the total area of the three rooms
	totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

	//Display the total area of the three rooms
	cout << "The total area of the three rooms is: " << totalArea << endl;

	//Deleter the objects from memory
	delete kitchen;
	delete bedroom;
	delete den;

	kitchen = nullptr;
	bedroom = nullptr;
	den = nullptr;
	
	return 0;
}