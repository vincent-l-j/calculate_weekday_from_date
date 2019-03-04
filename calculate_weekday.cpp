#include <iostream>
using namespace std;

// yyyymmdd
long calculateWeekday(long date) {
  // extract year, month, day
  int yr,yr1,yr2,m,d,y_count,m_count;
  bool lpyr = false;

  yr = date / 10000;
  yr1 = yr / 100;
  yr2 = yr % 100;
  m = (date / 100) % 100;
  d = date % 100;

  // check if leapyear
  if ((yr % 4 == 0) && (yr % 100 != 0) || (yr % 400 == 0)) {
    lpyr = true;
  }

  // TODO: Calculate Doomsday
  // Switch case for the month; customise the number to be added
  // add the day d
  res = dDays1 + mDays1 + yDays + mDays2 + dDays2;
  
  return res;
}

int main()
{
  cout << "please input two dates (space or enter between) yyyymmdd" << endl;
  long date;
  cin >> date;
  
  string day = "";
  
  switch (calculateWeekday(date))
  {
    case 0: day = "Saturday"; break;
    case 1: day = "Sunday"; break;
    case 2: day = "Monday"; break;
    case 3: day = "Tuesday"; break;
    case 4: day = "Wednesday"; break;
    case 5: day = "Thursday"; break;
    case 6: day = "Friday"; break;
    default: break;
  }

  cout << day << endl;
}
