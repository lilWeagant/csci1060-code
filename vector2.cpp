/*
Author: Andrew Dale
Edited by: Riley Weagant
*/
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

struct Month{
  string name;
  int days;
};

void five_rmonths(vector<string>);
vector<string> sixmonth_rev(vector<string>);
void reverse_order(vector<string>);
vector<Month> months_to_years(vector<string>);
void print_year(vector<Month>);



int main(){
  ifstream months_file;
  months_file.open("months.txt");
  string month;
  vector<string> months;
  while(getline(months_file, month)){
    months.push_back(month);
  }
  cout << "Random five months:" << endl;
  five_rmonths(months);
  cout << "\nSix months reverse:" << endl;
  sixmonth_rev(months);
  cout << "\nMonths in reverse order: " << endl;
  reverse_order(months);
  cout << "\nYears :" << endl;
  vector<Month> years = months_to_years(months);
  print_year(years);
  months_file.close();
  
  return 0;
}

vector<string> sixmonth_rev(vector<string> months){
  vector<string> holder;
  // Could use months.size()/2 but we know that we only want 6
  for(int i = 0; i < 6; i++){
    holder.push_back(months.back());
    months.pop_back();
  }
  
  vector<string> holdertwo;
  for(int i = 0; i < 6; i++){
    holdertwo.push_back(holder.back());
    holder.pop_back();
  }
  for (int i = 0; i < months.size(); i++){
    holdertwo.push_back(months[i]);
  }
  
  for (int i = 0; i < holdertwo.size(); i++){
    cout << holdertwo[i] << endl;
  }
  
  return months;
  
}

void reverse_order(vector<string> months){
  vector<string>::reverse_iterator rit;
  for(rit = months.rbegin(); rit != months.rend(); ++rit){
    cout << *rit << endl;
  }
}

void five_rmonths(vector<string> months){
  srand(time(NULL));
  for(int i = 0; i < 5; i++){
    int random = rand() % 12;
    cout << months.at(random) << endl;
  }
}

vector<Month> months_to_years(vector<string> months){
  vector<Month> years;
  for (int i = 0; i < months.size(); i++){
    Month stmonth;
    if(months[i] == "February"){
      stmonth.name = months[i];
      stmonth.days = 28;
      years.push_back(stmonth);
    }
    else if(months[i] == "April" || months[i] == "June" || months[i] == "September" 
    || months[i] == "November"){
      stmonth.name = months[i];
      stmonth.days = 30;
      years.push_back(stmonth);
    }
    else{
      stmonth.name = months[i];
      stmonth.days = 31;
      years.push_back(stmonth);
    }
  }
  return years;
}

void print_year(vector<Month> years){
  for (int i = 0; i < years.size(); i++){
    cout << "Month: " << years[i].name << " has " << years[i].days << " days." 
    << endl;
  }
}



