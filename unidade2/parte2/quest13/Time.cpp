#include <chrono>
#include <ctime>
#include <iostream>
#include <format>

using std::cout, std::endl, std::format;

#include "Time.hpp"

Time::Time(int hr, int min, int sec)
{
  setTime(hr, min, sec);  
  //qualquer modificação posterior em setTime reflete no construtor
}

Time::Time() {
  time_t timestamp;
  time(&timestamp);
  const tm* time = std::localtime(&timestamp);

  setHour(time->tm_hour);
  setMinute(time->tm_min);
  setSecond(time->tm_sec);
}

void Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

std::string Time::toUniversal() const
{
	return format("{:02d}:{:02d}:{:02d}", hour, minute, second);
}

std::string Time::toStandard() const
{
	return format("{:02d}:{:02d}:{:02d} {}", ( (hour == 0 || hour == 12) ? 12 : hour % 12 ), minute, second, (hour < 12 ? "AM" : "PM"));
}

void Time::tick() {
    second += 1;

    if(second >= 60) {
        second -= 60;
        minute += 1;
    }

    if(minute >= 60) {
        minute -= 60;
        hour += 1;
    }

    hour = (hour >= 24) ? (hour-24) : hour;
}