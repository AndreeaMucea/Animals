#include <iostream>
#include <string>
using namespace std;

class Cat
{
public: string name;
public: string sound;

		Cat(string nameCat, string soundCat) {
			name = nameCat;
			sound = soundCat;
		}


		void Name() {
			cout << "The cats " << name << " ";
		}

		void Sound() {
			cout << " sound " << sound << "\n";
		}
};

