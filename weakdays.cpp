#include <cstdint>
#include <iostream>

enum WeekDays : std:: uint8_t //size constant = 8bit 
{

    MONDAY =1,
    TUSDAY,
    WENSDAY,
    THURSDAY,
    FRIDAY,
    SATRDAY,
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
else if (day==TUSDAY){

    std::cout<<"tuesday \n";
}
else if (day==WENSDAY) {
    std::cout<<"wensday \n";
}
else if (day==THURSDAY) {
    std::cout<<"thursday \n";

}
else {
std::cout<<"sorry \n";
}
    return 0;
}