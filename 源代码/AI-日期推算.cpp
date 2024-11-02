#include <iostream>

// 判断是否为闰年
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 计算给定年份的天数
int daysInYear(int year) {
    return isLeapYear(year) ? 366 : 365;
}

// 计算给定月份的天数
int daysInMonth(int year, int month) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0;
    }
}

// 计算给定天数对应的日期
void calculateDateFromAD1(int days) {
    int year = 1; // 从公元1年开始计算
    int totalDays = 0;
    int remainingDays = days;

    // 计算经过的完整年数
    while (totalDays + daysInYear(year) <= remainingDays) {
        totalDays += daysInYear(year);
        year++;
    }

    // 计算剩余的天数对应的月份和日期
    int month = 1;
    while (totalDays + daysInMonth(year, month) <= remainingDays) {
        totalDays += daysInMonth(year, month);
        month++;
    }

    // 计算剩余的天数对应的日期
    int day = remainingDays - totalDays + 1;

    std::cout << "Date: " << year << "-" << month << "-" << day << std::endl;
}

int main() {
    int days;
    std::cout << "Enter the number of days from 1 AD: ";
    std::cin >> days;

    calculateDateFromAD1(days);

    return 0;
}