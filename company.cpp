#include "company.h"

using std::ifstream;
using std::string;
using std::vector;
using std::unique_ptr;
using std::cout;
using std::endl;

namespace hw3{
	unique_ptr<Company> Company::makeCompanyFrom(string filename, string c_name){
		ifstream fr{filename};
		vector<unique_ptr<Region>> n_regions;
		if(fr.fail()){
			cout<<"Failed to open file for company"<<endl;
			std::exit(1);
		}
		while(!fr.eof())
			n_regions.push_back(Region::makeRegionFrom(fr));
		unique_ptr<Company> comp{new Company{c_name, move(n_regions)}};
		return comp;
	}

	void Company::generate_report(){
		cout<<"==========================="<<endl;
		cout<<"Report for "<<_name<<":"<<endl;
		cout<<"==========================="<<endl<<endl;
		for(unsigned int i = 0; i<_regions.size();++i)
			cout<<_regions.at(i)->to_string()<<endl;
	}
}
