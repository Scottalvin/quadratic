/*
GITONGA'S FACTORY,
Created by alvin
July 2022,
MIT license
C99 compiler
*/

#include <stdio.h>


int main()
{
    int totalhouseworked=40;
    int krapin,employmentno,hoursworked,normalpay,overtimepay,taxpaid,netincome;
    char name[100];

    printf("welcome to Gitonga's Factory\n");
    printf("Enter name:");
    scanf("%s", &name);
    printf("Enter employee num:");
    scanf("%d", &empolymentNo);
    printf("Enter krapin:");
    scanf("%d",&krapin);
    printf("Enter number of house worked:");
    scanf("%d",%hoursworked);

    normalpay=1000*totalhoursworked;
    overtimepay=(hoursworked-totalhoursworked)*1500;
    taxpaid=normalpay*30/100;
    netincome=(normalpay-taxpaid)+overtimepay;

    printf("normalpay:%d\n",normalpay);
    printf("overtimepay:%d\n",overtimepay);
    printf("taxpaid:%d\n",taxpaid);
    printf("netincome:%d\n",netincome);

    return 0;
}


























