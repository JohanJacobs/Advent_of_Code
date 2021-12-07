#pragma once
#include "D1A.hpp"

#include <iostream>
#include <fstream>
#include <limits>
#include <string>

void JJAOC::D1A::run() const
{
	std::cout << "AOC 2012 Day 1 A \n";
	
	//open data file 
	const std::string file_name{ "data/data_d1.txt" };
	std::ifstream data{ file_name,std::ios::in };	
	if (!data) [[unlikely]]
	{
		std::cout << "Could not open " << file_name << '\n';
		exit(1);
	}


	// calculate the increments
	uint32_t prev{ std::numeric_limits<uint32_t>::max()};
	uint32_t increments{ 0 };

	for (std::string line; getline(data,line);)
	{
		uint32_t curr{ static_cast<uint32_t>(std::stoi(line)) }; // save the current value 
		if (std::exchange(prev, curr) < curr)
			increments += 1;
	}

	std::cout << "Total increments: " << increments << '\n\n';
}
