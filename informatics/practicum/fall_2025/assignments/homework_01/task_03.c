#include <stdio.h>

#define currentDay 1
#define currentMonth 11
#define currentYear 2025

#define offsetYear 1900

#define startDayBits 5
#define startMonthBits 4
#define startYearBits 9
#define durationBits 13
#define controlBits 1
#define totalBits 32

int main()
{
    unsigned int inputNumber;
    if (scanf("%u", &inputNumber) != 1)
    {
        puts("Invalid input format!");
        return 1;
    }

    unsigned int startDayShift = 0;
    unsigned int startDayMask = ((1u << startDayBits) - 1) << startDayShift;
    unsigned int startDay = (inputNumber & startDayMask) >> startDayShift;

    unsigned int startMonthShift = startDayBits;
    unsigned int startMonthMask = ((1u << startMonthBits) - 1) << startMonthShift;
    unsigned int startMonth = (inputNumber & startMonthMask) >> startMonthShift;

    unsigned int startYearShift = startDayBits + startMonthBits;
    unsigned int startYearMask = ((1u << startYearBits) - 1) << startYearShift;
    unsigned int startYear = (inputNumber & startYearMask) >> startYearShift;
    startYear += offsetYear;

    unsigned int durationShift = startDayBits + startMonthBits + startYearBits;
    unsigned int durationMask = ((1u << durationBits) - 1) << durationShift;
    unsigned int duration = (inputNumber & durationMask) >> durationShift;

    unsigned int cntSetBits = 0;
    for (unsigned int i = 0; i < totalBits; ++ i)
    {
        unsigned int mask = 1u << i;
        if (inputNumber & mask)
        {
            ++ cntSetBits;
        }
    }

    if (cntSetBits & 1)
    {
        puts("Invalid");
        return 1;
    }

    if (startMonth == 0 || startMonth > 12)
    {
        puts("Invalid");
        return 1;
    }

    if (startDay == 0)
    {
        puts("Invalid");
        return 1;
    }

    switch (startMonth)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            if (startDay > 31)
            {
                puts("Invalid");
                return 1;
            }
            break;
        }

        case 4:
        case 6:
        case 9:
        case 11:
        {
            if (startDay > 30)
            {
                puts("Invalid");
                return 1;
            }
            break;
        }

        case 2:
        {
            unsigned int days = 28;
            if (startYear % 400 == 0 || (startYear % 4 == 0 && startYear % 100))
            {
                ++ days;
            }

            if (startDay > days)
            {
                puts("Invalid");
                return 1;
            }
            break;
        }

        default:
        {
            /// cannot end up here
        }
    }

    if (currentYear < startYear ||
        (currentYear == startYear && currentMonth < startMonth) ||
        (currentYear == startYear && currentMonth == startMonth && currentDay < startDay))
    {
        puts("Invalid");
        return 1;
    }

    unsigned endDay = startDay, endMonth = startMonth, endYear = startYear;
    while (1)
    {
        unsigned int days;
        switch (endMonth)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            {
                days = 31;
                break;
            }

            case 4:
            case 6:
            case 9:
            case 11:
            {
                days = 30;
                break;
            }

            case 2:
            {
                days = 28;
                if (endYear % 400 == 0 || (endYear % 4 == 0 && endYear % 100))
                {
                    ++ days;
                }
                break;
            }

            default:
            {
                /// cannot end up here
            }
        }

        if (duration <= days - endDay)
        {
            endDay += duration;
            duration = 0;
            break;
        }

        duration -= days - endDay;
        endDay = days;

        endDay = 1;
        duration--;
        endMonth++;

        if (endMonth == 13)
        {
            endMonth = 1;
            endYear++;
        }
    }

    if (endYear < currentYear ||
        (endYear == currentYear && endMonth < currentMonth) ||
        (endYear == currentYear && endMonth == currentMonth && endDay < currentDay))
    {
        puts("Too old");
    }
    else
    {
        puts("Good");
    }

    return 0;
}

