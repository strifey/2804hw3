#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <memory>
#include <vector>
#include "bad_line.h"

namespace hw3 {
	class Customer{
		private:
			std::string _name, _phone_num;
			int _id;
			float _sales_num, _sales_p;
		public:
			Customer(std::string name, std::string phone_num, 
					int id, float sales_num, float sales_p)
				: _name(name), _phone_num(phone_num), 
				 _id(id), _sales_num(sales_num), _sales_p(sales_p) {}
			static std::unique_ptr<Customer> 
				makeCustomerFromLine(std::string& line);

			std::string  to_string();
	};
}
#endif
