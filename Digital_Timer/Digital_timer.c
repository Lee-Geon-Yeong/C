#include<stdio.h>
#include<string.h>
#include<windows.h>
int year = 2008;
int month = 3;
int day = 2;
char weekDay[3];
int hours = 23;
int hours_dis = 0;
int minute = 59;
int second = 55;
char AM_PM[2];
char first_Line[20];
char second_Line[20];
void setTimer();
int zeller_Weekday();
int main()
{
    while (1)
    {
        setTimer();
        printf(first_Line, "%02d - %02d - %02d [%s]\n", year, month, day, weekDay);
        printf(second_Line, "[%s] %02d : %02d : %02d\n", AM_PM, hours_dis, minute, second);
        printf("%s", first_Line);
        printf("%s", second_Line);
   
        system("cls");
    }
    return 0;
}
void setTimer()
{
    second++;
    if (second == 60)
    {
        second = 0;
        minute++;
    }
    if (minute == 60)
    {
        minute = 0;
        hours++;
        hours_dis = hours;
    }
    if (hours == 24)
    {
        hours = 0;
        day++;
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 31)
            {
                day = 1;
                month++;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 30)
            {
                day = 1;
                month++;
            }
            break;
        case 2:
            if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)
            {
                if (day > 29)
                {
                    day = 1;
                    month++;
                }
            }
            else
            {
                if (day > 28)
                {
                    day = 1;
                    month++;
                }
            }
            break;
        }
    }
    if (month > 12)
    {
        month = 1;
        year++;
    }
    switch (zeller_Weekday())
    {
    case 0:
        weekDay[0] = 'S';
        weekDay[1] = 'U';
        weekDay[2] = 'N';
        break;
    case 1:
        weekDay[0] = 'M';
        weekDay[1] = 'O';
        weekDay[2] = 'N';
        break;
    case 2:
        weekDay[0] = 'T';
        weekDay[1] = 'U';
        weekDay[2] = 'E';
        break;
    case 3:
        weekDay[0] = 'W';
        weekDay[1] = 'E';
        weekDay[2] = 'D';
        break;
    case 4:
        weekDay[0] = 'T';
        weekDay[1] = 'H';
        weekDay[2] = 'U';
        break;
    case 5:
        weekDay[0] = 'F';
        weekDay[1] = 'R';
        weekDay[2] = 'I';
        break;
    case 6:
        weekDay[0] = 'S';
        weekDay[1] = 'A';
        weekDay[2] = 'T';
        break;
    }
    if (hours >= 12)
    {
        AM_PM[0] = 'P';
        AM_PM[1] = 'M';
    }
    else if (hours < 12)
    {
        AM_PM[0] = 'A';
        AM_PM[1] = 'M';
    }
}
int zeller_Weekday()
{
    int temp_Year = year;
    int temp_Month = month;
    int temp_Day = day;
    if (month < 3)
    {
        temp_Year -= 1;
        temp_Month += 12;
    }
    return (temp_Year + temp_Year / 4 - temp_Year / 100 + temp_Year / 400 + (13 * temp_Month + 8) / 5 + temp_Day) % 7;
}
