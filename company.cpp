#include "company.h"

using std::ifstream;
using std::string;
using std::vector;
using std::unique_ptr;
using std::cout;

namespace hw3{
	static unique_ptr<Company> Company::makeCompanyFrom(std::string filename){
		ifstream fr{filename};
		vector<unique_ptr<Region>> n_regions();
		if(fr.fail()){
			cout<<"Failed to open file for company"<<endl;
			std::exit(1);
		}
		while(!fr.eof())
			vector.push_back(Region::makeRegionFrom(fr));
		unique_ptr<Company> comp{new Company{"TEST", n_regions}};
		return comp;
	}
}
