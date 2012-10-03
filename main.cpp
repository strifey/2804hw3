#include <iostream>
#include <cmath>
#include <string>
#include <memory>
#include <exception>
#include <fstream>
#include "company.h"

using std::unique_ptr;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using namespace hw3;

int main(int argc, char*argv[]){
	if(argc < 3){
		cout<<"CLI Error. Correct format is:"<<endl;
		cout<<"\t./program <filename> <companyname>"<<endl;
		exit(1);
	}
	string file(argv[1]);
	string comp_name(argv[2]);
	unique_ptr<Company> co = Company::makeCompanyFrom(file, comp_name);
	co->generate_report();
	return 0;
}
