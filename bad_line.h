#ifndef BAD_LINE_H
#define BAD_LINE_H

#include <iostream>
#include <exception>

namespace hw3{
	class bad_line: public std::exception{
		virtual bad_line(){}
		
		virtual ~bad_line(){}
	};
}

#endif
