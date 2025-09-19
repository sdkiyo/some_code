#include "arg_function.hpp"

namespace su
{
	void arg_function(const uint16_t argc, const char* argv[])
	{
		for (uint16_t i = 0; i < argc; i++)
		{
			if (std::string(argv[1]) == "--help" || std::string( argv[1] ) == "-h")
			{
				std::cout << "-a, --arg <---- показать передаваемые аргументы\n-h, --help <---- показать список команд\n";
				exit( 0 );
			}
			if (std::string(argv[i]) == "--arg" || std::string(argv[i]) == "-a")
			{
				std::cout << BLUE << "\ninput arguments when running the " << argv[0] << ": " << argc << "\n\n";
				for (uint16_t j = 0; j < argc; j++)
				{
					std::cout << MAGNETA << "argument " << j << ": " << argv[j] << "\n";
				}
				std::cout << "\n";
			}
		}
	}// arg_foo()
}// namespace su ( special utils )
