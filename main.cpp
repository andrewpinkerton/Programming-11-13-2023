// Name: Andrew Pinkerton
// Program Description: Polymorphism
// Date: Nov 13th, 2023

#include <iostream>
#include <string>

using namespace std;

class Vehicle { // parent class
public:
	void output()
	{
		cout << "This is the vehicle class" << endl;
	}

};

class Car : public Vehicle // child class
{
public: 
	void output()
	{
		cout << "This is the car class" << endl;
	}
};



int main()
{
	// function overriding which is also a part of polymorphism

	// pointer for my parent class
	Vehicle* myRide = new Car;
	// I am making an instance of my vehicle class called myRide. It is pointing to the Car class instead thought
	// This gives the vehicle class access to the function inside of the Car class
	myRide->output();

	//-> arrow operator. This is how we can access a member of a class when using a pointer





}





























//class Remote {
//public:
//
//	// function overloading which is part of polymorphism 
//
//	void powerButton(int number) // the names can be the same, the parameters must be different
//	{
//		cout << "I turned on the TV" << endl;
//	}
//
//	void powerButton(string text)
//	{
//		cout << "I turned off the TV" << endl;
//	}
//};
//
//class DVD : public Remote// child class
//{
//public:
//	void powerButton()
//	{
//		cout << "I am using a RedBox DVD" << endl;
//	}
//
//
//};
//int main()
//{
//	
//	Remote TV;
//
//	TV.powerButton(1);
//	TV.powerButton("Hello");
//
//	DVD remote;
//	remote.powerButton();
//
//
//
//
//
//
//
//
//}