#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <cmath>
#include <sstream>
#include <memory>
#include <vector>

namespace hw3 {
	class Customer{
		private:
			std::string _name;
			int _phone_num, _id;
			float _sales_num, _sales_p;
		public:
			Customer(std::string name, int phone_num, 
					int id, float sales_num, float sales_p)
				: _name(name), _phone_num(phone_num), 
				 _id(id), _sales_num(sales_num), _sales_p(sales_p) {}
			static const int NUM_FIELDS = 7;
			static std::unique_ptr<Customer> 
				makeCustomerFromLine(std::string& line);
	};
}
#endif
