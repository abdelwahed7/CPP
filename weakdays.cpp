#include <cstdint>
#include <iostream>

enum WeekDays : std:: uint8_t //size constant = 8bit 
{

    MONDAY =1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main(){

constexpr std::uint16_t meeting_day =10U;

constexpr std::uint16_t num_of_day =7U;

std:: cout<<"please entar today :"; 

 int current_of_day;

std::cin>> current_of_day;

int day = ((current_of_day + meeting_day) % num_of_day) +1;

std:: cout<<" The day is  " <<day <<std::endl;

if(day==MONDAY){

    std::cout<<"monday \n";
    
}
else if (day==TUESDAY){

    std::cout<<"TUESDAY \n";
}
else if (day==WEDNESDAY) {
    std::cout<<"WEDNESDAY \n";
}
else if (day==THURSDAY) {
    std::cout<<"THURSDAY \n";

}
else {
std::cout<<"sorry \n";
}
    return 0;
}