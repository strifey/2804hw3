#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <stdlib>
#include <string>
#include <cmath>
#include <iostream>

namespace hw3{
	class Customer{
		public:
			string name, phone_num,
			int sales_num, id;
			static unique_ptr<Customer> Customer::makeCustomerFromLine(string& line);
	};
}
#endif
