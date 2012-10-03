#include "region.h"

using std::string;
using std::istream;
using std::unique_ptr;
using std::cout;
using std::endl;
using std::vector;
using std::ostringstream;

namespace hw3{
	unique_ptr<Region>  Region::makeRegionFrom(istream& inptr){
		string new_name;
		vector<unique_ptr<Customer>> n_customers;
		getline(inptr, new_name);
		string cu_line;
		getline(inptr, cu_line);
		while(cu_line.length() > 0){
			//TODO handle exceptions correctly
			try{
				n_customers.push_back(Customer::makeCustomerFromLine(cu_line));
			}catch(bad_line ble){
				cout<<"Caught on: " << cu_line <<endl;
				continue;
			}
			getline(inptr, cu_line);
		}
		unique_ptr<Region> reg{new Region{new_name, move(n_customers)}};
		return reg;
	}

	string Region::to_string(){
		ostringstream oss;
		oss<<endl;
		oss<<"\t\t\t==========\t"<<_name<<":\t=========="<<endl;
		oss<<"-----------------------------------------------";
		oss<<"-----------------------------------------------"<<endl;
		oss<<"Name:\t\t\tID:\t\tPhone Number:\t\tTotal Sales:\t\tSales %"<<endl;
		oss<<"-----------------------------------------------";
		oss<<"-----------------------------------------------"<<endl;
		for(unsigned int i = 0; i<_customers.size(); ++i)
			oss<<_customers.at(i)->to_string()<<endl;
		return oss.str();
	}
}
