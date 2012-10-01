#ifndef REGION_H
#define REGION_H

#include <string>
#include <iostream>
#include <cmath>

using namespace hw3{
	class Region{
		public:
			std::string name;
			vector<Customer> customer;
			static unique_ptr<Region>  Region::makeRegionFrom(std::istream& inptr);
	};
}
#endif
