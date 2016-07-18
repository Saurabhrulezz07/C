/* 3. Define a structure called cricket that will describe the following information:
player name
team name
batting average
Using cricket, declare an array player with 50 elements and write a program to read the information about all the 50 players and print a team-wise list containing names of players with their batting average.
*/
/* It is assumed there are only 3 teams Ind, Pak and Aus */
#include<stdio.h>
struct cricket
{
    char player_name[50];
    char team_name[50];
    float bat_avg;
}c[5];
void main()
{
    int i;
    char str[100];
    printf("Enter player details\n");
    for(i=0;i<5;i++)
    {
        printf("Player: %d\n",(i+1));
        printf("Name: ");
        gets(c[i].player_name);
        printf("Team Name: ");
        gets(c[i].team_name);
        printf("Batting average: ");
        scanf("%f",&c[i].bat_avg);
        gets(str);
    }
    /* Finding players belonging to Ind */
    printf("\n**********************\nPlayers of India\n**********************\n");
    for(i=0;i<5;i++)
    {
        /* We can not compare2 strings directly using == */
        if(strcmp(c[i].team_name,"Ind")==0)
        {
            puts(c[i].player_name);
            printf("Batting avg %f\n\n",c[i].bat_avg);
        }
    }
    /* Finding players belonging to Pak */
    printf("**********************\nPlayers of Pakistan\n**********************\n");
    for(i=0;i<5;i++)
    {
        /* We can not compare2 strings directly using == */
        if(strcmp(c[i].team_name,"Pak")==0)
        {
            puts(c[i].player_name);
            printf("Batting avg %f\n\n",c[i].bat_avg);
        }
    }
    /* Finding players belonging to Australia */
    printf("**********************\nPlayers of Australia\n**********************\n");
    for(i=0;i<5;i++)
    {
        /* We can not compare2 strings directly using == */
        if(strcmp(c[i].team_name,"Aus")==0)
        {
            puts(c[i].player_name);
            printf("Batting avg %f\n\n",c[i].bat_avg);
        }
    }
}
