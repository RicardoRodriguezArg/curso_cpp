/**
STL Overview
map
*/

#include <map>
#include <iterator>
#include <iostream>
#include <string>
int main()
{

std::multimap<std::string, int> phoneNums;

  //Insert key, value as pairs
  phoneNums.insert(std::pair<std::string, int>("Joe",123));
  phoneNums.insert(std::pair<std::string, int>("Will",444));
  

  //Insert duplicates
  phoneNums.insert(std::pair<std::string, int>("Joe",369));
  phoneNums.insert(std::pair<std::string, int>("Smith",567));
  phoneNums.insert(std::pair<std::string, int>("Joe",888));
  phoneNums.insert(std::pair<std::string, int>("Will",999));
  

  //Checking frequency of different keys
  std::cout<<"\n\nFrequency of different names"<<std::endl;
  std::cout<<"Number of Phones for Joe = "<<phoneNums.count("Joe")<<std::endl;
  std::cout<<"Number of Phones for Will = "<<phoneNums.count("Will")<<std::endl;
  std::cout<<"Number of Phones for Smith = "<<phoneNums.count("Smith")<<std::endl;
  std::cout<<"Number of Phones for Zahid = "<<phoneNums.count("Zahid")<<std::endl;

  //Print all Joe from the list and then erase them
  std::pair<std::multimap<std::string,int>::iterator, std::multimap<std::string,int>::iterator> ii;
  std::multimap<std::string, int>::iterator it; //Iterator to be used along with ii
  ii = phoneNums.equal_range("Joe"); //We get the first and last entry in ii;
  std::cout<<"\n\nPrinting all Joe and then erasing them"<<std::endl;
  for(it = ii.first; it != ii.second; ++it)
  {
    std::cout<<"Key = "<<it->first<<"    Value = "<<it->second<<std::endl;
  }
  }