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
		private:
			std::string _name;
			std::vector<std::unique_ptr<Customer>> _customers;
		public:
			Region(std::string name, std::vector<std::unique_ptr<Customer>> customers)
				:_name(name), _customers(std::move(customers)){}
			static std::unique_ptr<Region>  makeRegionFrom(std::istream& inptr);
	};
}
#endif
