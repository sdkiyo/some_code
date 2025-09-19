#include <string>
#include <cstdint>

namespace su {
	class custom_exception {
		public:
			custom_exception( std::string type, std::string msg, uint16_t code );
			std::string getType();
			std::string getMsg();
			uint16_t getCode();
		private:
			std::string type;
			std::string msg;
			uint16_t code;
	};
}// namespace su ( special utils )
