#include <iostream>
#include <string>
#include <vector>

std::string index(std::vector<std::string> my_array, std::string search) {
	for (int i = 0; i < my_array.size(); i++) {
		if (my_array[i] == search) {
			return std::to_string(i);
		}
	}
}


int main() {
	std::vector<std::string> animals = { "cat", "dog", "mouse", "chicken", "hamster" };
	std::cout << "The index of dog is " << index(animals, "dog") << std::endl;
	std::cout << "The index of hamster is " << index(animals, "hamster") << std::endl;
	
	system("pause");
}