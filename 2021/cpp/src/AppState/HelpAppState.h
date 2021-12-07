#pragma once
#include "AppState/AppState.hpp"
#include <iostream>

namespace JJAOC
{
	class HelpState : public AppState
	{
	public:
		void run() const override
		{
			std::cout
				<< "Format for parameters are DXY"
				<< "where x is the day in question."	
				<< "where y is the A or B part of the day and everything in CAPITALS.\n";
		}

	};
}

