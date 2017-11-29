/*
STL
Non mutating algorithm
any_off
*/

#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <regex>
/*
any_off example, validate http header
*/

static const std::regex reHeader("([A-Za-z0-9!#$&'*+.^_'|~-]+): *(.+) *");


bool validate_bool(const std::vector<std::string> & header)
{
	return std::all_of(std::begin(header), std::end(header),[](const std::string & header_line) -> bool
	{
		std::smatch matches;
		return std::regex_match(header_line,matches ,reHeader);
	}
		);
	
}

int main()
{
	std::vector<std::string> http_header = {"Foo:Bar",
	"Content-type:application/json"
	};
	std::cout<<"Validate Header: "<<std::boolalpha<<validate_bool(http_header)<<std::endl;
	return 0;
}