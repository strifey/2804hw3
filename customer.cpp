#include "customer.h"

using std::string;
using std::unique_ptr;
using std::istringstream;
using std::ostringstream;
using std::getline;
using std::hex;

namespace hw3 {
	unique_ptr<Customer> Customer::makeCustomerFromLine(string& line){
		istringstream iss(line);
		string input[5];
		for(int i = 0; i<6; i++){
			if(iss.eof())
				throw new bad_line();
			getline(iss, input[i], ',');
		}
		if(!iss.eof())
			throw new bad_line();
		int id, phone_num; 
		float sales_num, sales_p;
		iss.str(input[0]);
		iss>>hex>>id;
		if(iss.fail())
			throw new bad_line();
		iss.str(input[1]);
		iss>>phone_num;
		if(iss.fail())
			throw new bad_line();
		iss.str(input[4]);
		iss>>sales_num;
		if(iss.fail())
			throw new bad_line();
		iss.str(input[5]);
		iss>>sales_p;
		if(iss.fail())
			throw new bad_line();
		ostringstream fullname(input[2]);
		fullname<<"\t";
		fullname<<input[3];
		unique_ptr<Customer> cu{new Customer{fullname.str(), phone_num, id, sales_num, sales_p}};
		return cu;
	}
}
