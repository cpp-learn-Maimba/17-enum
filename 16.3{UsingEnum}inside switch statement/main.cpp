#include <iostream>
#include <string_view>

enum class Month {
    Jan , Feb, Mar, Apr ,
    May, Jun, Jul, Aug,
    Sep, Oct, Nov, Dec
};

std::string_view month_to_string(Month month){  //////makes a view of a  string {string of the month enum}
    switch (month)
    {
        /*
        case Month::Jan : return "January";
        case Month::Feb : return "February";
        case Month::Mar : return "March";
        case Month::Apr : return "April"; //...........To stop repeating Month,,,a new format is described below
        case Month::May : return "May";
        case Month::Jun : return "June";
        case Month::Jul : return "July";
        case Month::Aug : return "August";
        case Month::Sep : return "September";
        case Month::Oct : return "October";
        case Month::Nov : return "November";
        case Month::Dec : return "December";
        default : return "None";
        */
       using enum Month; //////////////////////////topic<usingenum>///////////////////////////////
        case Jan : return "January";
        case Feb : return "February";            //.......gcc version--- {10} doesn't like this
        case Mar : return "March";
        case Apr : return "April";                 //.......gcc version 11 works    
        case May : return "May";                   //.......msvc2019 works

        case Jun : return "June";
        case Jul : return "July";
        case Aug : return "August";
        case Sep : return "September";
        case Oct : return "October";
        case Nov : return "November";
        case Dec : return "December";
        default : return "None";
    }

}


int main(){

    Month month {Month::Apr};
    std::cout << "month : " << month_to_string(month) << std::endl;
   
    return 0;
}