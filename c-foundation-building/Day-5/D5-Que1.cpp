//
// Created by abina on 07-08-2025.
//

/*Employee Attendance Check
A company decides to reward employees with a bonus if their monthly attendance is satisfactory.
An employee is eligible for the bonus if their attendance percentage is greater than or equal to 75%.

Given the total number of working days in a month and the number of days the employee was present,
 write a program to determine whether the employee is eligible for the bonus.

Take two inputs: presentDays and totalDays.
If attendance is >= 75%, employee is eligible for bonus.

Input Format:
------------------
Take two inputs: presentDays and totalDays.
If attendance is >= 75%, employee is eligible for bonus.


Print "Eligible for bonus" if attendance percentage is ≥ 75%.

Output Format:
-------------------
Print "Not eligible for bonus" if attendance percentage is < 75%.
*/
#include<stdio.h>
int main(){
    float presentDays,totalDays,attendance;

    scanf("%f",&presentDays);
    scanf("%f",&totalDays);


    attendance = (presentDays/totalDays)*100;

    if(attendance >= 75) {
        printf("Eligible for bonus");
    }

    else if(attendance < 75){
        printf("Not eligible for bonus");
    }

    return 0;

}

