#pragma once

#include <iostream>
using namespace std;

class clockType
{
	friend ostream& operator<<(ostream&, const clockType&);
	friend istream& operator>>(istream&, clockType&);

public:
	void setTime(int hours, int minutes, int seconds);
	////Function to set the member variables hr, min, and sec.
 //Postcondition: hr = hours; min = minutes; sec = seconds
    void getTime(int& hours, int& minutes, int& seconds) const;
    //Function to return the time.
    //Postcondition: hours = hr; minutes = min; seconds = sec
    clockType operator++();
    //Overload the pre-increment operator.
    //Postcondition: The time is incremented by one second.
    bool operator==(const clockType& otherClock) const;
    //Overload the equality operator.
    //Postcondition: Returns true if the time of this clock
    // is equal to the time of otherClock,
    // otherwise it returns false.
    bool operator!=(const clockType& otherClock) const;
    //Overload the not equal operator.
    //Postcondition: Returns true if the time of this clock
    // is not equal to the time of otherClock,
    // otherwise it returns false.
    bool operator<=(const clockType& otherClock) const;
    //Overload the less than or equal to operator.
    //Postcondition: Returns true if the time of this clock
    // is less than or equal to the time of
    // otherClock, otherwise it returns false.
    bool operator<(const clockType& otherClock) const;
    //Overload the less than operator.
    //Postcondition: Returns true if the time of this clock
    // is less than the time of otherClock,
    // otherwise it returns false.
    bool operator>=(const clockType& otherClock) const;
    //Overload the greater than or equal to operator.
    //Postcondition: Returns true if the time of this clock
    // is greater than or equal to the time of otherClock,
    // otherwise it returns false.
    bool operator>(const clockType& otherClock) const;
    //Overload the greater than operator.
    //Postcondition: Returns true if the time of this clock
    // is greater than the time of otherClock,
    // otherwise it returns false.
    clockType(int hours = 0, int minutes = 0, int seconds = 0);
    //Constuctor to inilialize the object with the values
    //specified by the user. If no values are specified,
    //the default values are assumed.
private:
    int hr;
    int min;
    int sec;
};
