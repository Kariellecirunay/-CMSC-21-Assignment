/* NEAREST CHARGING STATION */

#include <stdio.h>

/*Using macro to define size of array */
#define Row 8
#define Column 8

int main() {

    /*Declaring variables point,charging_stations, and road_networks as int and char type */
    int point;
    char *charging_stations[8]={"A","B","[C]","[D]","E","F","G","H"};
    int road_networks [Row][Column]={  /*Declare and initialize the array road_networks */
        {1,1,0,0,0,1,0,0},
        {1,1,1,0,0,0,0,0},
        {0,1,1,0,1,1,0,0},
        {0,0,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0},
        {1,0,1,0,0,1,0,0},
        {1,0,0,1,0,0,1,0},
        {0,0,0,0,0,1,0,1}
    };

    /*Prints the charging_stations above */
    int x = 0;
    while (x < 8)
    {
        printf("%10s", charging_stations[x]);
        x++;
    }
    printf("\n");

    /*Prints the station A and B */
    /* while loop is looping each row, meanwhile the for-loop is for the column */
    int i = 0;
    while (i < 2)
    {
        printf("%s",charging_stations[i]);
        for ( int j = 0; j < Column; j++)
        {
            printf("%9d ", road_networks[i][j]);
        }
        i++;
        printf("\n");
    }

    /*Prints the station C and D */
    int a = 2;
    while (a < 4)
    {
        printf("%s",charging_stations[a]);
        for ( int b = 0; b < Column; b++)
        {
            printf("%7d   ", road_networks[a][b]);
        }
        a++;
        printf("\n");
    }

    /*Prints the other station */
    int c = 4;
    while (c < Row)
    {
        printf("%s",charging_stations[c]);
        for ( int d = 0; d < Column; d++)
        {
            printf("%9d ", road_networks[c][d]);
        }
        c++;
        printf("\n");
    }

    /*Determining the location of the nearest charging station */
    printf("Which point are you located? 0-A,1-B,2-C,3-D,4-E,5-F,6-G,7-H\n");
    scanf ("%d", &point);
    printf ("At point: %s\n",charging_stations[point]);

    /*if-else to identify the charging station */
    if (point == 2)
        printf("point: C arrived to charging station");
    else if (point == 3 || point == 4 || point == 6)
        printf ("point:D arrived to charging station");
    else
        printf("point: C arrived to charging station");

    return 0;

}
