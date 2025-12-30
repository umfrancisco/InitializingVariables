#include <iostream>

int main() {
	int room_width {0};
	std::cout << "Enter the width of the room: ";
	std::cin >> room_width;

	int room_length {0};
	std::cout << "Enter the length of the room: ";
	std::cin >> room_length;

	std::cout << "Total Area = " << room_width * room_length << std::endl;

	return 0;
}
