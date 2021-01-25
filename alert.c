#include "stats.h"
#include "alert.h"


int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    if ( computedStats > maxThreshold)
    {
        //change to for loop with size of
        alerters[0];
        alerters[1];
    }
}

void emailAlerter ()
{
    emailAlertCallCount = 1;
}   

void ledAlerter () 
{
    ledAlertCallCount = 1;
}
