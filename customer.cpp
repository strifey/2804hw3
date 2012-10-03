#include "customer.h"

using std::string;
using std::unique_ptr;
using std::istringstream;
using std::ostringstream;
using std::stringstream;
using std::getline;
using std::hex;
using std::setprecision;

namespace hw3 {
	unique_ptr<Customer> Customer::makeCustomerFromLine(string& line){
		istringstream iss(line);
		string input[6];
		for(int i = 0; i<6; i++){
			if(iss.eof())
				throw new bad_line();
			getline(iss, input[i], ',');
		}
		int id;
		float sales_num, sales_p;

		stringstream c_id;
		c_id<<hex<<input[0];
		c_id>>id;
		if(c_id.fail())
			throw new bad_line();

		stringstream c_num;
		c_num<<input[4];
		c_num>>sales_num;
		if(c_num.fail())
			throw new bad_line();

		stringstream c_p;
		c_p<<input[5];
		c_p>>sales_p;
		if(c_p.fail())
			throw new bad_line();
		sales_p*=100;

		ostringstream fullname;
		fullname<<input[2]<<", "<<input[3];
		unique_ptr<Customer> cu{new Customer{fullname.str(), input[1], id, sales_num, sales_p}};
		return cu;
	}

	string Customer::to_string(){
		ostringstream oss;
		oss<<_name<<"\t";
		if(_name.size()<15)
			oss<<'\t';
		oss<<_id<<"\t\t";
		oss<<_phone_num<<"\t\t";
		if(_phone_num.size()<8)
			oss<<'\t';
		oss<<std::fixed<<setprecision(2)<<_sales_num<<"\t\t\t"<<std::fixed<<setprecision(2)<<_sales_p;
		return oss.str();
	}
}
