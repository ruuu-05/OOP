#include <bits/stdc++.h>
//instead of just datetime one struct
struct Date{
    int year;
    int month;
    int year;
};
struct Time{
    int hr ; 
    int min;
    int sec;
};
struct DateTime{
    Date date;
    Time time;
    //constrctor
    DateTime(Date date , Time time);
};
