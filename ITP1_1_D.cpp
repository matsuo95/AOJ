#include <iostream>

int main() {
	int S;
	std::cin >> S;

	int h, m, s;

	h = S / 3600;
	m = S % 3600 / 60;
	s = S % 60;

	std::cout << h << ":" << m << ":" << s << std::endl;
	return 0;
}