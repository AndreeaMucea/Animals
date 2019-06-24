
#include <iostream>

#include "Horse.cpp"
#include "Cat.cpp"
#include "Dog.cpp"

using namespace std;

int main()
{
	Horse* horse = new Horse("Deli","iha");
	horse->Name();
	cout << "makes";
	horse->Sound();

	Cat* cat = new Cat("Bella","miau");
	cat->Name();
	cout << "makes";
	cat->Sound();

	Dog* dog = new Dog("Ugo", "hamm");
	dog->Name();
	cout << "makes";
	dog->Sound();

	return 0;
}
