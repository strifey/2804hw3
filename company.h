#ifndef COMPANY_H
#define COMPANY_H

#include <iostream>
#include <string>
#include <cmath>
#include <memory>
#include <vector>
#include "region.h"
#include "customer.h"

namespace hw3{
	class Company{
		public:
			std::string name;
			std::vector<std::unique_ptr<Region>> regions;
			static std::unique_ptr<Company> makeCompanyFrom(std::string filename);
			void generate_report();
	};
}
#endif
