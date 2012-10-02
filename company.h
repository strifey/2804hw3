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
		private:
			std::string _name;
			std::vector<std::unique_ptr<Region>> _regions;
		public:
			Company(std::string name, std::vector<std::unique_ptr<Region>> regions)
				:_name(name), _regions(std::move(regions)){}
			static std::unique_ptr<Company> makeCompanyFrom(std::string filename);
			void generate_report();
	};
}
#endif
