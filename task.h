#include <iostream>
#include <string>

struct DateTime {
    int year;
    int month;
    int day;
    int hour;
};

class Task {

    public:

        Task(std::string d = "", int p = 1, DateTime due = {0,0,0,0}, bool c = false)
        : desc(d), priority(p), dueDate(due), completed(c) {}

        int id;
        std::string desc;
        int priority;
        DateTime dueDate;
        bool completed;

    
};