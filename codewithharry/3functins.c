#include<stdio.h>
#include<time.h>
void goodMorning();
void godAfternoon();
void goodNight();
void main()
{
    int time;
    printf("enter the time in 24 hrs format");
    scanf("%d",time);
    if(5<time<12)
    {
        goodMorning();
    }
    else if(12<time<2)
    {
        goodAfternoon();
    }
    else if(24>time>8)
    {
        goodNight();
    }
}
void goodMorning();
{
    printf("goodmorning");
}
void goodAfternoon();
{
    printf("goodafternoon");
}
void goodNight();
{
    printf("goodnight");
}