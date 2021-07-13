#include<stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();
void main()
{
    int time;
    printf("entertime in 24hrs format\n");
    scanf("%d",&time);
     if(time>=4&&time<12)
     {
         goodMorning();
     }
    if(time>=12&&time<16)
    {
        goodAfternoon();

    }
    if((time>=16&&time<=24)||(time>=1&&time<=3))
    {
        goodNight();
    }
}
    void goodMorning()
    {
        printf("good morning");
    }
    void goodAfternoon()
    {
        printf("good afternoon");
    }
    void goodNight()
    {
        printf("good night");
    }