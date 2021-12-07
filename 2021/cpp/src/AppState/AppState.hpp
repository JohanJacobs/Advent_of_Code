#pragma once

namespace JJAOC
{
	class AppState
	{
	public:
		virtual void run() const = 0;
		virtual ~AppState() {};
	};
}
