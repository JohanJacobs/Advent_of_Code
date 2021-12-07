#include <iostream>
#include <memory>

#include "AppState/AppState.hpp"
#include "AppState/HelpAppState.h"
#include "Days/D1A.hpp"

std::shared_ptr<JJAOC::AppState> GetState(const std::string param) 
{		
	if (param == "D1A")
		return std::make_shared<JJAOC::D1A>();

	return std::make_shared<JJAOC::HelpState>();

}



int main(int argc, char *argv[])
{
	std::cout << "Welcome to Advent of Code 2021\n\n";

	
	if (argc == 1)
	{
		JJAOC::HelpState help;
		help.run();
		return EXIT_FAILURE;
	}

	for (int i = 1; i < argc; i++)
	{
		std::string param{ argv[i] };
		GetState(std::string(argv[i]))->run();
	}
	
	return EXIT_SUCCESS;
}