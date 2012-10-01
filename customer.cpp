#include "customer.h"

using std::string;
using std::unique_ptr;
using std::istringstream;
using std::getline;

namespace hw3 {
	unique_ptr<Customer> Customer::makeCustomerFromLine(string& line){
		istringstream iss(line);
		string id, phone_num, sales_num, sales_p, first_name, last_name; 
		getline(iss, id, ',');
		getline(iss, phone_num, ',') ;
		getline(iss, last_name, ',');
		getline(iss, first_name, ',');
		getline(iss, sales_num, ',');
		if(iss.eof())
			throw new bad_line();
		getline(iss, sales_p);
		if(!iss.eof())
			throw new bad_line();
		return nullptr;
		
	}
}
