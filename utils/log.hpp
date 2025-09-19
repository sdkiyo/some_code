#ifndef _SU_LOG_HPP
#define _SO_LOG_HPP

#include <iostream>
#include <chrono>
#include <fstream>
#include "colors.hpp"

namespace su
{
	struct warning_struct {
		std::vector< std::string > warning;
		std::vector< std::string > warning_L2;
	};
	void event_log(const uint8_t type, const std::string& msg);

	void action_log_save(const std::string& path, const std::string& msg, bool rewrite);

	void action_log_save_new(const std::string& path, const std::string& current_thread, const int current_tick, const std::string& current_file, const std::string& action, const std::string& msg, const std::chrono::duration<float> program_time);

	void error_log_save(const std::string& path, warning_struct warning_list, const std::string& error_text, std::chrono::duration<float> program_time);
}// namespace su ( special utils )

#endif
