#include<stdio.h>
#include<stdlib.h>

void rules();
void gameend(int score, int moves);
void checkconditions(int score, int moves);

struct list{
    char name[50];
    int hs;
    int mm;
};

int high_score =0, max_moves=1;

int main(){
    printf("Welcome to hand cricket \n");
    char ch;
    struct list players[100];
    int n=0;
    
    while(1){
        printf("\nDo you want to play? Press Y(y) for yes and N(n) for No Press R(r) to read the rules \n");
        scanf(" %c", &ch);

        if(ch == 'n' || ch == 'N'){
            break;
        }

        else if(ch == 'R' || ch == 'r'){
            rules();
        }

        else if(ch=='Y' || ch == 'y'){
            int score =0, moves =1;
            printf("Enter your name\n");
            scanf("%s", players[n].name);
            while(1){
                int select;

                printf("Enter a number between 1 and 6: ");
                scanf("%d", &select);

                if(select >6 || select <1){
                    players[n].hs =0;
                    players[n].mm =0;
                    n++;
                    gameend(score,moves);
                    break;
                }

                int comp_select = (rand() % 6) + 1;

                printf("You guessed %d", select);
                printf("\nAnd the computer guessed .....");
                printf("\t %d\n\n", comp_select);


                if(select == comp_select){
                    players[n].hs = score;
                    players[n].mm = moves;
                    n++;
                    gameend(score,moves);
                    break;
                }

                else{
                    score = score + select;
                    moves++;

                    printf("Your current score is %d\n\n", score);

                    checkconditions(score, moves);
                }
            }
        } 

        else{
            printf("\nError\n");
        }       
    }

    for(int k=0; k<n ;k++){
        for(int j=0; j<n-k-1;j++){
            if(players[j].hs >players[j+1].hs){
                struct list temp = players[j];
                players[j] = players[j+1];
                players[j+1] = temp; 
            }
        }
    }

    printf("\nThe leaderboard in sorted order is: \n\n");

    printf("Name \t\t\t High Score \t\t\t Maximum Moves\n");

    for(int j=0; j<n; j++){
        printf("%s \t\t\t\t %d \t\t\t\t\t\t %d \n", players[j].name, players[j].hs, players[j].mm);
    }

    return 0;
}


void rules(){
    printf("\n1) You have to enter a number from 1 to 6 and computer will also select a number in that range");
    printf("\n2) Choosing a number out of the given range will result in disqualification");
    printf("\n3) If the computer guesses the same number as you, game ends. Try to score as high as possible, all the best\n");
}

void gameend(int score, int moves){
    printf("Game Over \n\n");
    printf("Your Score was %d \n", score);
    printf("You lasted for %d moves \n\n", moves);
    if(score == high_score){
    printf("Congrats on getting a new highscore\n");
    }
    if(moves == max_moves){
    printf("Congrats on lasting for maximum moves\n");
    }
}

void checkconditions(int score, int moves){
    if(score <high_score){
        int diff = high_score - score;
        printf("You need %d more runs to beat your high score\n\n", diff);
    }
    if(score == high_score){
        printf("Congrats you have set a new high score\n\n");
    }
    if(score > high_score){
        high_score = score;
    }
    if(moves > max_moves){
        max_moves = moves;
    }
}
