#include <iostream>

int main() {
	int room_width {0};
	std::cout << "Enter the width of the room: ";
	std::cin >> room_width;

	int room_length {0};
	std::cout << "Enter the length of the room: ";
	std::cin >> room_length;

	if (room_width < 0 || room_length < 0) {
		std::cout << "Length or width can not be negative numbers...";
	} else {
		std::cout << "Total Area = " << room_width * room_length << std::endl;
	}

	return 0;
}
