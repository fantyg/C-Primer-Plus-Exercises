#include <iostream>

long daysFromSecondes(long);
short hoursFromSecondes(long, long);
short minutesFromSecondes(long, long, short);
short restSecondes(long, long, short, short);

int main()
{
    using namespace std;
    long secondes;

    cout << "Input time in secondes: ";
    cin >> secondes;
    long days;
    short hours, minutes, restSec;

    days = daysFromSecondes(secondes);
    hours = hoursFromSecondes(secondes, days);
    minutes = minutesFromSecondes(secondes, days, hours);
    restSec = restSecondes(secondes, days, hours, minutes);

    cout << "It\'s: " << days << " day(s) " << hours << " hour(s) ";
    cout << minutes << " minute(s) and " << restSec << " secondes.\n";
    return 0;
}

long daysFromSecondes(long secondes)
{
    const double SecondesInDay{60. * 60. * 24.};

    return long(secondes / SecondesInDay);
}

short hoursFromSecondes(long secondes, long days)
{
    const double SecondesInHour{60. * 60.};
    const short HoursInDay{24};

    return short(long(secondes / SecondesInHour) - days * HoursInDay);
}

short minutesFromSecondes(long secondes, long days, short hours)
{
    const double SecondesInMinute{60.};
    const short MinutesInHour{60}, MinutesInDay{60 * 24};

    return short(long(secondes / SecondesInMinute) - days * MinutesInDay - hours * MinutesInHour);
}

short restSecondes(long secondes, long days, short hours, short minutes)
{
    const short SecondesInMinute{60}, SecondesInHour{60 * 60};
    const int SecondesInDay{60 * 60 * 24};

    return secondes - days * SecondesInDay - hours * SecondesInHour - minutes * SecondesInMinute;
}
