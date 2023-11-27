#include <stdio.h>
#include <stdlib.h>

// global variable
static int cf = 1; // static int because cf is not fixed
int nf;

// move up function if cf is greater than nf then this function work
int move_up(int nf)
{
    for (cf; cf <= nf; cf++)
    {
        sleep(1);
        printf("your are in %d\n", cf);
    }
    cf = nf;
}

// move up function if cf is lower than nf then this function work
int move_down(int nf)
{
    for (cf; cf >= nf; cf--)
    {
        sleep(1);
        printf("your are in %d\n", cf);
    }
    cf = nf; // if loop end new floor is current floor
}

// display function they work display current floor to new floor
void display()
{
    do
    {
        printf("Your current floor is %d\n", cf);
        printf("Enter floor number:");
        scanf("%d", &nf);
        if (nf <= 0)
        {
            printf("Invalid floor number please enter 1 to 10!\n");
            printf("Your current floor is %d\n", cf);
        }
        else if (nf > 10)
        {
            printf("Invalid floor number please enter 1 to 10!\n");
            printf("Your current floor is %d\n", cf);
        }
        else if (nf > cf)
        {
            move_up(nf);
        }
        else if (nf < cf)
        {
            move_down(nf);
        }
        else
        {
            printf("you are already in current floor!\n");
        }
    } while (nf != -1);
}

int main()
{
    // call display function
    display();
    return 0;
}