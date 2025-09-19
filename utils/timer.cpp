#include "timer.hpp"

namespace su {
	std::chrono::time_point<std::chrono::high_resolution_clock> timer_start() {
		std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
		return start;
	}// timer_start()

	std::chrono::duration<float> timer_end( std::chrono::time_point<std::chrono::high_resolution_clock>& start ) {
		std::chrono::time_point<std::chrono::high_resolution_clock> end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<float> duration = end - start;
		return duration;
	}// timer_end()
}// namespace su ( special utils )
