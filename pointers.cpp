#include <iostream>
#include <format>

using std::format;
using std::cout;

int main() {
	int x = 40;
	int y = 140;

	int* ip;

	ip = &x;

	auto str = format("x is {}\n", x);
	auto str_1 = format("y is {}\n", y);
	auto str_2 = format("ip is {}\n", *ip);

	y = x;

	int* ip_1;

	ip_1 = &x;

	auto str_3 = format("ip_1 is {}\n", *ip_1);

	cout << str;
	cout << str_1;
	cout << str_2;
	cout << str_3;

}
