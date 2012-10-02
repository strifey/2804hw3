#include "region.h"

using std::string;
using std::istream;
using std::unique_ptr;
using std::cout;
using std::endl;
using std::vector;

namespace hw3{
	unique_ptr<Region>  Region::makeRegionFrom(istream& inptr){
		string new_name;
		vector<unique_ptr<Customer>> n_customers();
		getline(inptr, new_name);
		string cu_line;
		getline(inptr, cu_line);
		while(cu_line.compare("\n")){;
			try{
				n_customers.push_back(Customer::makeCustomerFromLine(cu_line));
			}catch(bad_line ble){
				cout<<ble.what()<<endl;
				cout<<"Caught on: " << cu_line <<endl;
			}
			getline(inptr, cu_line);
		}
		unique_ptr<Region> reg{new Region{new_name, n_customers}};
		return reg;
	}
}
