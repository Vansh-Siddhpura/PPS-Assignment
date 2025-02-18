// Define a structure called cricket that will describe the following information: Player
// name, Team name, Batting average. Using cricket, read the information about 5
// players and print list containing names of players with their batting average
#include<stdio.h>
struct cricket{
    char name[50];
    char team[50];
    float battingAvg;
};
int main(){
    struct cricket players[5];
    for(int i = 0; i < 5; i++){
        printf("\nEnter the intformation of player %d\n",i+1);
        printf("Enter the player name : ");
        fgets(players[i].name, sizeof(players[i].name), stdin);
        printf("Enter the player's team : ");
        fgets(players[i].team, sizeof(players[i].team), stdin);
        printf("Enter the player's batting average : ");
        scanf("%f",&players[i].battingAvg);
        while(getchar() != '\n');
    }
    printf("\n------------------Player's Infomation------------------\n");
    for(int i = 0; i < 5; i++){
        printf("\nPlayer %d\n",i+1);
        printf("Name : %s",players[i].name);
        printf("Team : %s",players[i].team);
        printf("Batting Average : %.2f\n",players[i].battingAvg);
    }
    return 0;
}