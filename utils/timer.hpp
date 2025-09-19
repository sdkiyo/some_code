#pragma once
#ifndef _SU_TIMER_HPP_
#define _SU_TIMER_HPP_

#include <iostream>
#include <chrono>
#include <ctime>

namespace su {
	std::chrono::time_point<std::chrono::high_resolution_clock> timer_start();

	std::chrono::duration<float> timer_end( std::chrono::time_point<std::chrono::high_resolution_clock>& start );
}// namespace su ( special utils )

#endif
