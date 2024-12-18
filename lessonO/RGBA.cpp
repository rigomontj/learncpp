// Each dot of color is the result of combining three beams of light:
// one red, one green, one blue. (RGB)
// the intensity of these lights are varied to produce different colors.
// typically, the intensity of R, G and B for a given pixel is
// represented by an 8-bit unsigned integer.
// For example:
// red pixel R=255, G=0, B=0
// purple pixel R=255, G=0, B=255
// medium grey pixel R=127, G=127, B=127
// There's a fourth value A, that stands for alpha:
// it controls how transparent the color is. A=0 fully transparent,
// A=255 fully opaque.
// R G B A are normally stored as a single 32-bit integer, with 8 bits
// used for each component
// bits 31-24	bits 23-16	bits 15-8	bits 7-0
// RRRRRRRR		GGGGGGGG	BBBBBBBB	AAAAAAAA
// red			green		blue		alpha
// the following program asks the user to enter a 32-bit hexadecimal value
// and then extracts the 8=bit color values for R G B and A

#include <iostream>
#include <cstdint>
#include <bitset>
#include <cmath>

std::uint32_t getHex()
{
	// prompt for input
	std::cout << "Enter an hexadecimal value for your pixel: ";

	std::uint32_t hex { 0x0 };
	std::cin >> std::hex >> hex;

	std::cout << "You entered the hexadecimal value: "
		<< std::hex << hex << "\n";

	return hex;
}

int calcTrailing(char col)
{
	// for a character (color), return number of trailing
	// zeroes the masked bitset will have
	int trl {};

	if (col == 'R')
		trl = 24;
	else if (col == 'G')
		trl = 16;
	else if (col == 'B')
		trl = 8;
	else // col == 'A'
		trl = 0;

	return trl;
}

std::uint8_t getColorValue(std::uint32_t p, std::uint32_t m, char c)
{
	// masking pixel bitset to remove the bits we don't care about
	return static_cast<uint8_t>((p & m) >> calcTrailing(c));
	// bitwise shift n times right where n is calculated using
	// character c that defines what color corresponds to
	// how many trailing zeroes
}

void printRGBA(std::uint32_t pxl)
{
	// declaring bit masks for each color
	// 1111'1111'0000'0000'0000'0000'0000'0000
	std::uint32_t Rmsk { 0xFF000000 	}; 
	// 0000'0000'1111'1111'0000'0000'0000'0000
	std::uint32_t Gmsk { 0x00FF0000 	};	
	// 0000'0000'0000'0000'1111'1111'0000'0000
	std::uint32_t Bmsk { 0x0000FF00   	};	
	// 0000'0000'0000'0000'0000'0000'1111'1111
	std::uint32_t Amsk { 0x000000FF    	};	

	// prints the values of each color for pixel
	char rgba  {};
	int	 value {};
	std::cout << std::dec;

	rgba = 'R';
	value = static_cast<int>(getColorValue(pxl, Rmsk, rgba));
	std::cout << rgba << " is " << value << "\n";
	rgba = 'G';
	value = static_cast<int>(getColorValue(pxl, Gmsk, rgba));
	std::cout << rgba << " is " << value << "\n";
	rgba = 'B';
	value = static_cast<int>(getColorValue(pxl, Bmsk, rgba));
	std::cout << rgba << " is " << value << "\n";
	rgba = 'A';
	value = static_cast<int>(getColorValue(pxl, Amsk, rgba));
	std::cout << rgba << " is " << value << "\n";
}

int main()
{
	// prompt hexadecimal input
	std::uint32_t px { getHex() };
	// outputs RGBA values of pixel
	printRGBA(px);

	return 0;
}
