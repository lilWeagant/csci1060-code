/*
Author: Andrew Dale
*/
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>

struct Month{
  std::string name;
  int days;
};

void five_rmonths(std::vector<std::string>);
std::vector<std::string> sixmonth_rev(std::vector<std::string>);
void reverse_order(std::vector<std::string>);
std::vector<Month> months_to_years(std::vector<std::string>);
void print_year(std::vector<Month>);



int main(){
  std::ifstream months_file;
  months_file.open("months.txt");
  std::string month;
  std::vector<std::string> months;
  while(getline(months_file, month)){
    months.push_back(month);
  }
  std::cout << "Random five months:" << std::endl;
  five_rmonths(months);
  std::cout << "\nSix months reverse:" << std::endl;
  sixmonth_rev(months);
  std::cout << "\nMonths in reverse order: " << std::endl;
  reverse_order(months);
  std::cout << "\nYears :" << std::endl;
  std::vector<Month> years = months_to_years(months);
  print_year(years);
  months_file.close();
  
  return 0;
}

std::vector<std::string> sixmonth_rev(std::vector<std::string> months){
  std::vector<std::string> holder;
  // Could use months.size()/2 but we know that we only want 6
  for(int i = 0; i < 6; i++){
    holder.push_back(months.back());
    months.pop_back();
  }
  
  std::vector<std::string> holdertwo;
  for(int i = 0; i < 6; i++){
    holdertwo.push_back(holder.back());
    holder.pop_back();
  }
  for(const auto &month : months){
    holdertwo.push_back(month);
  }
  
  for(const auto &month : holdertwo){
    std::cout << month << std::endl;
  }
  
  return months;
  
}

void reverse_order(std::vector<std::string> months){
  for(auto rit = months.crbegin(); rit != months.crend(); ++rit){
    std::cout << *rit << std::endl;
  }
}

void five_rmonths(std::vector<std::string> months){
  srand(time(NULL));
  for(int i = 0; i < 5; i++){
    int random = rand() % 12;
    std::cout << months.at(random) << std::endl;
  }
}

std::vector<Month> months_to_years(std::vector<std::string> months){
  std::vector<Month> years;
  for(const auto &month : months){
    Month stmonth;
    if(month == "February"){
      stmonth.name = month;
      stmonth.days = 28;
      years.push_back(stmonth);
    }
    else if(month == "April" || month == "June" || month == "September" 
    || month == "November"){
      stmonth.name = month;
      stmonth.days = 30;
      years.push_back(stmonth);
    }
    else{
      stmonth.name = month;
      stmonth.days = 31;
      years.push_back(stmonth);
    }
  }
  return years;
}

void print_year(std::vector<Month> years){
  for(const auto &month : years){
    std::cout << "Month: " << month.name << " has " << month.days << " days." 
    << std::endl;
  }
}



