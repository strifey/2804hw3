#ifndef COMPANY_H
#define COMPANY_H

#include <iostream>
#include <string>
#include <cmath>
#include "region.h"
#include "customer.h"

using namespace hw3{
	class Company{
		public:
			std::string name;
			vector<region> regions;
			static unique_ptr<Company> makeCompanyFrom(std::string filename);
	};
}
#endif
