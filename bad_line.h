#ifndef BAD_LINE_H
#define BAD_LINE_H

#include <iostream>
#include <exception>

namespace hw3{
	class bad_line: public std::exception{
		public:
			bad_line(){}
			inline std::string what() noexcept {return "Bad line formatting in file\n";};	
	};
}

#endif
