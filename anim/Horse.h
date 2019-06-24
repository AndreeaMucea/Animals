#include <iostream>
#include <string>
using namespace std;

class Horse
{

public: string name;
public: string sound;

			Horse(string nameHorse, string soundHorse) {
				name = nameHorse;
				sound = soundHorse;
			}


			void Name() {
				cout << "The horses "<< name<<" ";
			}

			void Sound() {
				cout << " sound "<< sound<<"\n";
			}
};

