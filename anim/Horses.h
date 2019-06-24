
#include <iostream>
using namespace std;
class Horses 
{
protected: char name;
protected:	char sound;

			Horses(char newName, char newSound) {

				name = newName;
				sound = newSound;

			}


			void Name() {
				cout << name;
			}

			void Sound() {
				cout << sound;
			}
};

