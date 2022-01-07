#include <stdio.h>

int main(){
        unsigned int day, month, year, new_day, new_month, new_year;
        day = 11, month = 6, year = 2003, new_year=0, new_day=0, new_month=0;

        if (month <=2){
                new_year = year-1;
                new_month = 0;
        }else if (month > 2) {
                new_year = year;
                new_month = ((4*month+23)/(10));

        unsigned int iday = 365*year+day+31*(month-1)-new_month+((new_year)/(4))-(3/4*((new_year/100)+1));

        if (iday%7==0){
                printf("Saturday\n");


        if (iday%7==1)
                printf("Sunday\n");


        if (iday%7==2)
                printf("Monday\n");


        if (iday%7==3)
                printf("Tuesday\n");


        if (iday%7==4)
                printf("Wednesday\n");


        if (iday%7==5)
                printf("Thursday\n");


        if (iday%7==6)
                printf("Friday\n");
        }
    }
}






