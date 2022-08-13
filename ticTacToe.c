/*

A simple Tic-Tac-Toe game I have made using C language. Some functions used in it might give sometime warning or also errors during compilation, ignore them else all the program is all correct i have made ..... (^_^) .....

*/

#include <stdio.h>
#include <stdlib.h>

void print_vertical_line()
{
    for (int j = 0; j < 3; j++)
        if ((j == 1) || (j == 0))
            printf("    |  ");
    printf("\n");
}

void print_horizontal_line(int i)
{
    for (int j = 0; j < 3; j++)
        if ((i == 1) || (i == 0))
            printf("-----");
    printf("\n");
}

struct player
{
    char player1[10];
    char player2[10];
} p;

int main()
{
    char ch[5][3] = {{'\0', '\0', '\0'},
                     {'\0', '\0', '\0'},
                     {'\0', '\0', '\0'}};

    int i, j, k;
    int choice;
    int x, y;
    int winner = 0;
    int p1, p2;
    int turn = 1;
    char sign_of_player_1;
    char sign_of_player_2;
    int position;
    int turn_no = 1;

    printf("Enter First player name : ");
    scanf("%s", p.player1);

    printf("Enter your choice : \n1) X\n2) O\n   --->: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        sign_of_player_1 = 'X';
        sign_of_player_2 = 'O';
    }

    if (choice == 2)
    {
        sign_of_player_1 = 'O';
        sign_of_player_2 = 'X';
    }

    printf("Enter Second player name : ");
    scanf("%s", p.player2);

    for (k = 1; k <= 9; k++)
    {
        if (turn == 1)
        {
            printf("\n%s\n", p.player1);
            turn = 2;
        }
        else if (turn == 2)
        {
            printf("\n%s\n", p.player2);
            turn = 1;
        }

        printf("Enter the position ( 1, 2, 3, 4, 5, 6, 7, 8, 9 ): ");
        scanf("%d", &position);

        system("cls");
        switch (position)
        {
        case 1:
            p1 = 0;
            p2 = 0;
            break;
        case 2:
            p1 = 0;
            p2 = 1;
            break;
        case 3:
            p1 = 0;
            p2 = 2;
            break;
        case 4:
            p1 = 1;
            p2 = 0;
            break;
        case 5:
            p1 = 1;
            p2 = 1;
            break;
        case 6:
            p1 = 1;
            p2 = 2;
            break;
        case 7:
            p1 = 2;
            p2 = 0;
            break;
        case 8:
            p1 = 2;
            p2 = 1;
            break;
        case 9:
            p1 = 2;
            p2 = 2;
            break;
        }

        if (ch[p1][p2] != '\0')
        {
            printf("\n\nInvalid position ! try again... (+_+)...... ");
            if (turn == 1)
                turn = 2;
            else
                turn = 1;
            continue;
        }

        if ((turn_no == 1) || (turn_no == 3) || (turn_no == 5) || (turn_no == 7) || (turn_no == 9))
            ch[p1][p2] = sign_of_player_1;
        else
            ch[p1][p2] = sign_of_player_2;

        for (i = 0; i < 3; i++)
        {
            print_vertical_line();

            for (j = 0; j < 3; j++)
            {
                if (ch[i][j] != '\0')
                    printf("%c", ch[i][j]);
                else
                    printf(" ");
                if ((j == 1) || (j == 0))
                    printf("   |  ");
            }

            printf("\n");
            print_vertical_line();
            print_horizontal_line(i);
        }

        turn_no++;

        if ((((ch[0][0] == 'X') && (ch[0][1] == 'X') && (ch[0][2] == 'X'))) || (((ch[1][0] == 'X') && (ch[1][1] == 'X') && (ch[1][2] == 'X'))) || (((ch[2][0] == 'X') && (ch[2][1] == 'X') && (ch[2][2] == 'X'))) || (((ch[0][0] == 'X') && (ch[1][0] == 'X') && (ch[2][0] == 'X'))) || (((ch[0][1] == 'X') && (ch[1][1] == 'X') && (ch[2][1] == 'X'))) || (((ch[0][2] == 'X') && (ch[1][2] == 'X') && (ch[2][2] == 'X'))) || (((ch[0][0] == 'X') && (ch[1][1] == 'X') && (ch[2][2] == 'X'))) || (((ch[0][2] == 'X') && (ch[1][1] == 'X') && (ch[2][0] == 'X'))))
        {
            if (sign_of_player_1 == 'X')
                printf("\n\n\n%s you are the winner\n\n\n", p.player1);
            else
                printf("\n\n\n%s you are the winner\n\n\n", p.player2);
            winner = 1;
            break;
        }

        else if ((((ch[0][0] == 'O') && (ch[0][1] == 'O') && (ch[0][2] == 'O'))) || (((ch[1][0] == 'O') && (ch[1][1] == 'O') && (ch[1][2] == 'O'))) || (((ch[2][0] == 'O') && (ch[2][1] == 'O') && (ch[2][2] == 'O'))) || (((ch[0][0] == 'O') && (ch[1][0] == 'O') && (ch[2][0] == 'O'))) || (((ch[0][1] == 'O') && (ch[1][1] == 'O') && (ch[2][1] == 'O'))) || (((ch[0][2] == 'O') && (ch[1][2] == 'O') && (ch[2][2] == 'O'))) || (((ch[0][0] == 'O') && (ch[1][1] == 'O') && (ch[2][2] == 'O'))) || (((ch[0][2] == 'O') && (ch[1][1] == 'O') && (ch[2][0] == 'O'))))
        {
            if (sign_of_player_1 == 'O')
                printf("\n\n\n%s you are the winner\n\n\n", p.player1);
            else
                printf("\n\n\n%s you are the winner\n\n\n", p.player2);
            winner = 1;
            break;
        }
    }
    if (!winner)
        printf("\n\n\nThe match is TY ......... ( ^_^ ) Try again...\n\n\n");

    return 0;
}

/* _________________________ SC [ P : Star ] _________________________*/