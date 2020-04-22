#include<iostream>
#include<cstdio>
using namespace std;

int daytab[2][13]{
{0,31,28,31,30,31,30,31,31,30,31,30,31},
{0,31,29,31,30,31,30,31,31,30,31,30,31}
};

bool IsLeapYear(int year){
    return (year % 4==0 && year %100!=0)||(year % 400==0);
}

int NumberOfYear(int year){
    if(IsLeapYear(year))
    {
        return 366;
    }else{
    return 365;
    }
}

int main(){
    int n;
    int year,month,day,number;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d %d",&year,&month,&day,&number);
        int row=IsLeapYear(year);
        for(int j = 0;j<month;j++){
            number+=daytab[row][j];
        }
        number+=day;
        while(number>NumberOfYear(year)){
            number-=NumberOfYear(year);
            year++;
        }
        month=0;
        row=IsLeapYear(year);

        while(number> daytab[row][month]){
            number-=daytab[row][month];
            month++;
        }
        day=number;
        printf("%04d-%02d-%0d\n",year,month,day);
    }
    return 0;
}
