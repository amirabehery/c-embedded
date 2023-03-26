#include <iostream>
#include <cstring>

int main()
{
    enum week_days
    {
        SATURDAY = 1,
        SUNDAY,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        MAX_WEEK_DAYS = 7
    };

    std::string input_day;
    std::uint16_t current_day;

    std::uint16_t after_days = 0;

    std::cout << "Today is: " << std::endl;
    std::cin >> input_day;

    std::cout << "Enter Number of days: " << std::endl;
    std::cin >> after_days;

    if (input_day == "saturday")
    {
        current_day = SATURDAY;
    }
    else if (input_day == "monday")
    {
        current_day = MONDAY;
    }
    else if (input_day == "tuesday")
    {
        current_day = TUESDAY;
    }
    else if (input_day == "wednesday")
    {
        current_day = WEDNESDAY;
    }
    else if (input_day == "thursday")
    {
        current_day = THURSDAY;
    }
    else if (input_day == "friday")
    {
        current_day = FRIDAY;
    }
    else
    {
        current_day = SATURDAY;
    }

    std::uint16_t after = (current_day + after_days) % MAX_WEEK_DAYS;
    std::string day;
    if (after == SATURDAY)
    {
        day = "Saturday";
    }
    else if (after == MONDAY)
    {
        day = "Monday";
    }
    else if (after == TUESDAY)
    {
        day = "Tuesday";
    }
    else if (after == WEDNESDAY)
    {
        day = "Wednesday";
    }
    else if (after == THURSDAY)
    {
        day = "Thursday";
    }
    else
    {
        day = "Friday";
    }

    std::cout << "After " << after_days << " Days is " << day << std::endl;
    return 0;
}