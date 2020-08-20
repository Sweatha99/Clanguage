#include <stdio.h>
#include <string.h>
#include <conio.h>

struct order{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
}p[10000];
int order_count = 0, served_count = 0, waiting_now = 0;

int order ()
{
    int n, in, qu;
    printf ("please enter your name: ");
    gets (p[order_count].name);
    p[order_count].order_number = 10000+order_count;
    items();
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;

    level:
    printf ("How many items you want to order? ");
    scanf ("%d", &n);

    getchar ();
    while (n--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 11 : {
        printf ("Enter the size of Veg Briyani: 1. quater  2. half 3. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (110*qu);

        else if (i==2) p[order_count].cost += (130*qu);

        else p[order_count].cost += (180*qu);

        break;
    }
    case 12 :{
        printf ("Enter the size of Chicken Briyani: 1. quarter  2. half  3. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (200*qu);

        else if (i==2) p[order_count].cost += (220*qu);

        else  p[order_count].cost += (250*qu);

        break;
    }
    case 13 :{
        printf ("Enter the size of Mutton Briyani: 1. quarter  2. half  3. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (230*qu);

        else if (i==2) p[order_count].cost += (250*qu);

        else  p[order_count].cost += (280*qu);

        break;
    }
    case 14 :{
        printf ("Enter the size of Egg Briyani: 1. quarter  2. half  3. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else if (i==2) p[order_count].cost += (150*qu);

        else  p[order_count].cost += (170*qu);

        break;
    }
    case 15 :{
        printf ("Enter the size of Veg Fried Rice: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (250*qu);

        break;
    }
    case 16 :{
        printf ("Enter the size of Chicken Fried Rice: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (120*qu);

        else p[order_count].cost += (240*qu);

        break;
    }
    case 17 : {
        printf ("Enter the size of Jigarthanda: 1. 150mg 2. 250mg\n");
        int i;
        scanf("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (180*qu);

        break;
    }
    case 18 : {
        printf ("200 mg of Cold Coffee\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (165*qu);
        break;
    }
    case 19 :{
        printf ("Enter the size of IceCream: 1. 1 scoop  2. 2 scoop\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (40*qu);

        else p[order_count].cost += (70*qu);
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
        n++;
    }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf ("\nThank you %s for your order. Your bill is %dtk.\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);
    order_count ++;
}
int receive ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return;
    }

    else if (served_count == order_count) {
        printf ("All order served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}
void items ()
{
    printf("..................................MENU....................................\n");

    printf("Item Code#   Description-------------------Size-------------------------------Price(tk)\n");

    printf("[11]---------Veg Briyani-------------------quarter/half/full------------------110/130/180\n");
    printf("[12]---------Chicken Briyani---------------quarter/half/full------------------200/220/250\n");
    printf("[13]---------Mutton Briyani----------------quarter/half/full------------------230/250/280\n");
    printf("[14]---------Egg Briyani-------------------quarter/half/full------------------130/150/170\n");
    printf("[15]---------Veg Fried Rice----------------Half/Full--------------------------130/250\n");
    printf("[16]---------Chicken Fried Rice------------Half/Full--------------------------120/240\n");
    printf("[17]---------Jigarthanda-------------------150mg/250mg------------------------130/180\n");
    printf("[18]---------Cold Coffee-------------------200mg------------------------------165\n");
    printf("[19]---------IceCream----------------------1 Scoop/2 Scoop--------------------40/70\n");

}
int main ()
{
    printf ("\t\t     Welcome To Paradise Dine\n");
    while (1){
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");

        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                system ("COLOR 1");
                printf ("We are closed come by again\n\n");
                return 0;
            }
        }
    }
}
