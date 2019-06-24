#include <iostream>
#include <string>
using namespace std;

class Dog
{
public: string name;
public: string sound;

		Dog(string nameDog, string soundDog) {
			name = nameDog;
			sound = soundDog;
		}


		void Name() {
			cout << "The dogs " << name << " ";
		}

		void Sound() {
			cout << " sound " << sound << "\n";
		}
};

