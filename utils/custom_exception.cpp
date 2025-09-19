#include "custom_exception.hpp"

namespace su {
	custom_exception::custom_exception( std::string type, std::string msg, uint16_t code ) {
		this->type = type;
		this->msg = msg;
		this->code = code;
	}// constructor custom_exception

	std::string custom_exception::getType() {
		return type;
	}// getType()

	std::string custom_exception::getMsg() {
		return msg;
	}// getMsg()

	uint16_t custom_exception::getCode() {
		return code;
	}// getCode()
}// namespace su ( special utils )
