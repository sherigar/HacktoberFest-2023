/* Tic Tac Toe Game by AJTimePyro */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// Defined Few Numbers
#define ZERO 0
#define ONE 1
#define TWO 2
#define THREE 3
#define SIX 6

// Special Characters
const char space = ' ';
const char pipe = '|';
const char nextline = '\n';
const char underscore = '_';

// Players Array
char players[] = {
    'X',
    'O'
};

// Tic Tac Toe Matrix
char tic_tac_toe[THREE][THREE] = {
    
    {
        '1',
        '2',
        '3'
    },

    {
        '4',
        '5',
        '6'
    },

    {
        '7',
        '8',
        '9'
    }

};


// Some Useful Functions


/* To Print Single Character */
void print(char input) {
    printf("%c", input);
}

/* To Print multiple whitespaces in line */
void printWhiteSpaces(int num_of_space) {

    while (num_of_space) {
        print(space);
        num_of_space--;
    }
}

/* To Print multiple underscores in line */
void printUnderscores(int num_of_underscore) {

    while (num_of_underscore) {
        print(underscore);
        num_of_underscore--;
    }
}


/*
    To Print Pattern with 5 spaces, then Pipe
    then again 5 spaces then again Pipe and
    finally 5 more spaces
*/
void printEmptyRow() {
    /*
        '    |     |     '
    */

    for (int i = ZERO; i < TWO; i++) {
        printWhiteSpaces(5);
        print(pipe);

        if (i == ONE) {
            printWhiteSpaces(5);
        }
    }
    print(nextline);
}


/*
    To Print Same Pattern as in printEmptyRow function
    but with space to Enter user's input
*/
void printInputRow(int row_num) {

    for (int j = ZERO; j < THREE; j++) {
        printWhiteSpaces(TWO);
        printf("%c", tic_tac_toe[row_num][j]);
        printWhiteSpaces(TWO);

        if (j != TWO) {
            print(pipe);
        }
    }
    print(nextline);
}


/* 
    To Print this Pattern
    _____|_____|_____
*/
void printUnderlineRow() {

    for (int k = ZERO; k < THREE; k++) {

        printUnderscores(5);
        if (k != TWO) {
            print(pipe);
        }
    }
    print(nextline);
}


/*
    To Construct and print the body of Tic Tac Toe
*/
void body() {
    /*
             |     |     
             |     |     
        _____|_____|_____
             |     |     
             |     |     
        _____|_____|_____
             |     |     
             |     |     
             |     |     
    */

    for (int l = ZERO; l < THREE; l++) {
        printEmptyRow();
        printInputRow(l);

        if (l != TWO) {
            printUnderlineRow();
        }
        else {
            printEmptyRow();
        }
    }
}


/*
    It will update tic_tac_toe matrix
    as user gives input,
    return true if successfully updated
    else return false if already filled
*/
bool updateArray(int upNum, char player) {

    int column, row;
    int remainder = upNum % THREE;
    int quotient = upNum / THREE;
    if (remainder == ZERO) {
        column = THREE;
        row = quotient - ONE;
    }
    else {
        column = remainder;
        row = quotient;
    }
    column--;

    char element = tic_tac_toe[row][column];
    for (int playerIter = ZERO; playerIter < TWO; playerIter++) {
        if (players[playerIter] != element) {
            continue;
        }
        else {
            return false;
        }
    }
    tic_tac_toe[row][column] = player;
    return true;
}


/*
    It will check the array to find the match,
    return true if match found
    else return false if not find the match
*/
bool chkAllEqual(char lineArr[THREE]) {
    for (int r = ZERO; r < THREE; r++) {

        if (r >= ONE) {
            if (lineArr[r] != lineArr[r - ONE]) {
                return false;
            }
            else {
                if (r == ONE) {
                    continue;
                }
                else {
                    return true;
                }
            }
        }
    }
}


/*
    It will check for winner in all given array,
    it will return Player char who won,
    but if not found then returns '0'
*/
char chkTwoCase(
    char box1[],
    char box2[]
    ) {

    if (chkAllEqual(box1)) {
        return box1[ZERO];
    }
    else if (chkAllEqual(box2)) {
        return box2[ZERO];
    }
    else {
        return '0';
    }
}


/*
    Checks all possible match to win and
    return player char if any player won
    else return '0'
*/
char chkAllCases() {

    char box1[THREE];
    char box2[THREE];
    char res;

    // In Rows and Columns
    for (int a = ZERO; a < THREE; a++) {

        for (int b = ZERO; b < THREE; b++) {
            box1[b] = tic_tac_toe[a][b];
            box2[b] = tic_tac_toe[b][a];
        }
        res = chkTwoCase(box1, box2);
        if (res != '0') {
            return res;
        }
    }

    // In Diagonals
    for (int m = ZERO; m < THREE; m++) {
        box1[m] = tic_tac_toe[m][m];
        box2[m] = tic_tac_toe[m][TWO - m];
    }

    // Check all Cases
    res = chkTwoCase(
        box1,
        box2
    );

    return res;
}


/*
    To Clear the terminal in each updates
*/
void clr() {
    system("@cls||clear");
}


/*
    It will run the game
*/
void game() {

    clr();
    body();

    int playeritr;
    int round = ZERO;
    int input;
    char player;
    bool result;

    srand( time(NULL) );
    playeritr = rand()%TWO;

    while (true) {

        if (round == 9) {
            printf("Match Has been Draw");
            break;
        }
        else {
            player = players[playeritr];

            printf("For Player %c\n", player);
            printf("Enter Numerical Value to Fill Desired Box: ");
            scanf("%d", &input);
            clr();

            if (input >= ONE && input <= 9) {

                result = updateArray(input, player);
                if (result) {
                    round++;
                    playeritr = -playeritr + ONE;   // Converts 1 to 0 & 0 to 1
                    char result = chkAllCases();

                    if (result != '0') {
                        body();
                        printf("Player %c is The Winner.\n", result);
                        break;
                    }
                }
                else {
                    printf("Box already filled\n");
                }
            }
            else {
                printf("Input Should be in Range of 1 to 9\n");
            }

            body();
        }
    }
}


void main() {
    game();
}