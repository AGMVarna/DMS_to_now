#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int now = time(NULL);
    cout << now << " seconds from January, 1st 1970" << endl;
    cout << "or" << endl;

    int seconds = now % 60;
    now = now / 60;
    int minutes = now % 60;
    now = now / 60;
    int hours = now % 24;
    now = now / 24;
    int days = now % 365;
    now = now / 365;

    cout << now << " Years, " << days << " Days, " << hours << " Hours, " << minutes << " Minutes, " << seconds << " Seconds";

    return 0;
}