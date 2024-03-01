#include <stdio.h>

void initializeSeatingChart();
int bookSeat(int row, int seat);
void displayTotalBookedSeats();

int rows = 5, maxSeats = 10;
char seats[5][10];

int main()
{
    initializeSeatingChart();

    bookSeat(3, 3);
    bookSeat(7, 3);
    bookSeat(1, 1);
    displayTotalBookedSeats();

    return 0;
}

void initializeSeatingChart()
{

    int i = 0, j = 0;

    while (i < rows)
    {
        while (j < maxSeats)
        {
            seats[i][j] = 'O';
            printf("%c", seats[i][j]);
            printf(" ");
            j++;
        }
        printf("\n");
        j = 0;
        i++;
        continue;
    }
    printf("\n");
}

int bookSeat(int row, int seat)
{

    if (row > rows || row < 0 || seat > maxSeats || seat < 0)
    {
        printf("Invalid");
    }
    else
    {
        if (seats[row - 1][seat - 1] == 'O')
        {
            seats[row - 1][seat - 1] = 'x';
            printf("Seat booked Successfully!!");
        }
        else
        {
            printf("It is Already full");
        }
    }

    printf("\n");
    return 0;
}

void displayTotalBookedSeats()
{

    int i = 0, j = 0;

    while (i < rows)
    {
        while (j < maxSeats)
        {

            printf("%c", seats[i][j]);
            printf(" ");
            j++;
        }
        printf("\n");
        j = 0;
        i++;
        continue;
    }
    printf("\n");
}
