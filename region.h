#ifndef REGION_H
#define REGION_H

#include <string>
#include <iostream>
#include <cmath>
#include <vector>
#include <memory>
#include "customer.h"

namespace hw3{
	class Region{
		public:
			std::string name;
			std::vector<std::unique_ptr<Customer>> customers;
			static std::unique_ptr<Region>  makeRegionFrom(std::istream& inptr);
	};
}
#endif
