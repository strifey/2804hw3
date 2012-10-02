#include <iostream>
#include <cmath>
#include <string>
#include <memory>
#include <exception>
#include "region.h"
#include "company.h"
#include "customer.h"

using std::unique_ptr;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using hw3::Customer;

int main(){
	try{
		cout<<"stuff"<<endl;
	}catch(std::exception& e){
		cout<<e.what()<<endl;
	}
	return 0;
}
