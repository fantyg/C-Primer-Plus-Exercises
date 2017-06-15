#include <iostream>

long daysFromSeconds(long seconds);

short hoursFromSeconds(long seconds, long days);

short minutesFromSeconds(long seconds, long days, short hours);

short restSeconds(long seconds, long days, short hours, short minutes);

int main() {
    using namespace std;
    long seconds;

    cout << "Input time in seconds: ";
    cin >> seconds;
    long days;
    short hours, minutes, restSec;

    days = daysFromSeconds(seconds);
    hours = hoursFromSeconds(seconds, days);
    minutes = minutesFromSeconds(seconds, days, hours);
    restSec = restSeconds(seconds, days, hours, minutes);

    cout << "It\'s: " << days << " day(s) " << hours << " hour(s) ";
    cout << minutes << " minute(s) and " << restSec << " seconds.\n";
    return 0;
}

long daysFromSeconds(long seconds) {
    const double SECONDS_IN_DAY{60. * 60. * 24.};

    return long(seconds / SECONDS_IN_DAY);
}

short hoursFromSeconds(long seconds, long days) {
    const double SECONDS_IN_HOUR{60. * 60.};
    const short HOURS_IN_DAY{24};

    return short(long(seconds / SECONDS_IN_HOUR) - days * HOURS_IN_DAY);
}

short minutesFromSeconds(long seconds, long days, short hours) {
    const double SECONDS_IN_MINUTE{60.};
    const short MINUTES_IN_HOUR{60}, MINUTES_IN_DAY{60 * 24};

    return short(long(seconds / SECONDS_IN_MINUTE) - days * MINUTES_IN_DAY - hours * MINUTES_IN_HOUR);
}

short restSeconds(long seconds, long days, short hours, short minutes) {
    const short SECONDS_IN_MINUTE{60}, SECONDS_IN_HOUR{60 * 60};
    const int SECONDS_IN_DAY{60 * 60 * 24};

    return short(seconds - days * SECONDS_IN_DAY - hours * SECONDS_IN_HOUR - minutes * SECONDS_IN_MINUTE);
}
