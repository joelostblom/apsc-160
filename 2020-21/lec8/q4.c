/*
 * Author:  
 * Date:    
 * 
 * Purpose: reads temperature data recorded on each day of the year at YVR
 *          from the file DATAFILE and prints the average temperature at midnight
 *          over the year.
 *
 *          Each line of the file represents data for a different day as follows:
 *          <day #> <temp at midnight> <temp at 6am> <temp at noon> <temp at 6pm>
 *
 *          Note: the angle brackets <> are not included in the file.
 */

#include <stdio.h>
#include <stdlib.h>

#define DATAFILE "yvrTemperature08s.dat"
#define DATA_PER_LINE 5

int main(void)
{
    /* Declare used variables */
    int day;
    double sixAM;
    double noon;
    double sixPM;
    double midnight;
    double average;
    double sum = 0.0;
    int count = 0;

    FILE *inFile;

    /* Open file */
    inFile = fopen(DATAFILE, "r");

    if (inFile == NULL)
        printf("Error opening input file - program terminating!\n");
    else
    {
        /* repeatedly attempt to scan a line of data from file */
        while (fscanf(inFile, "%d %lf %lf %lf %lf", &day, &midnight, &sixAM, &noon, &sixPM) == DATA_PER_LINE)
        {
            sum += midnight;
            count++;
        }

        /* Keep track of stats */
        if (count == 0)
        {
            printf("The file was empty");
        }
        else
        {
            average = sum / count;
            printf("Average temperature at midnight: %.1f\n", average);
        }
        /* Done */
        fclose(inFile);
   }
 

    return 0;
}