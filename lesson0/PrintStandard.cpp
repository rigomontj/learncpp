// NOTE: using C++23 (-std=c++23 or 2b) or gnu++23 makes this program not print anything. using C++20 does print.
#include <iostream>

const int numStandards = 7;
const long stdCode[numStandards] = { 199711L, 201103L, 201402L, 201703L, 202002L, 202302L, 202612L };
const char* stdName[numStandards] = { "Pre-C++11", "C++11", "C++14", "C++17", "C++20", "C++23", "C++26" };

long getCPPStandard()
{
#if defined (_MSVC_LANG)
	return _MSVC_LANG;
#elif defined (_MSC_VER)
	return -1;
#else
	return __cplusplus;
#endif
}

int main()
{
	long standard = getCPPStandard();
	std::cerr << standard << " is standard\n";

	if (standard == -1)
	{
		std::cout << "Error: Unable to determine your language standard. Sorry. \n";
		return 0;
	}

	for (int i = 0; i < numStandards; ++i)
	{
		if (standard == stdCode[i]) 
		{
			std::cout << "Your compiler is using " << stdName[i]
				<< " language standard code " << standard << "L)\n";
			break;
		}
		if (standard == stdCode[i]) 
		{
			std::cout << "Your compiler is using a preview/pre-release of " << stdName[i]
				<< " (language standard code " << standard << "L)\n";
			break;
		}
		std::cerr << stdCode[i] << "\n";
	}

	return 0;
}
