#include <iostream>
#include <cstdint>

int main()
{
	/*
	unsigned int u { 50 };                                                     
	int i { static_cast<int>(u) };          
	std::cout << u;
	std::cout << " unsigned to signed ";
	std::cout << i;
	std::cout << "\n";
	
	int in { -50 };                                                     
	unsigned int un { static_cast<unsigned int>(in) };          
	std::cout << in;
	std::cout << " signed to unsigned ";
	std::cout << un;
	std::cout << "\n";
	*/

	
	/*
	unsigned int a		{ static_cast<unsigned int>(answer) };
	float 		 b		{ static_cast<double>(answer) };
	float		 c	 	{ static_cast<float>(answer) };
	bool 		 d		{ static_cast<bool>(answer) };
	char 		 e 		{ static_cast<char>(answer) };
	char8_t 	 f		{ static_cast<char8_t>(answer) };
	char16_t	 g		{ static_cast<char16_t>(answer) };
	char32_t	 h		{ static_cast<char32_t>(answer) };
	*/

	int answer {};
	std::cin >> answer;

	std::cout << answer << " int into unsigned int " << static_cast<unsigned int>(answer) << "\n";
	std::cout << answer << " int into double float " << static_cast<double>(answer) << "\n";
	std::cout << answer << " int into float " << static_cast<float>(answer) << "\n";
	std::cout << answer << " int into bool " << static_cast<bool>(answer) << "\n";
	std::cout << answer << " int into char " << static_cast<char>(answer) << "\n";
	std::cout << answer << " int into int8_t " << static_cast<std::int8_t>(answer) << "\n";
	std::cout << answer << " int into uint8_t " << static_cast<std::uint8_t>(answer) << "\n";

	return 0;
}
