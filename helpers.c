/* Helper functions for Problem Set 3.*/
 
#include <cs50.h>

#include "helpers.h"

// binary search function
bool b_search(int value, int values[], int n)
{
    int end = n - 1;
    int begg = 0;

    // ensures beginning point is less than end point
    while (end >= begg)
    {
        int mid = (begg + end) / 2;
        if (values[mid] == value)
        {
            return true;
        }
        // shifts end point if mid value > value
        else if (values[mid] > value)
        {
            end = mid - 1;
        }
        // shifts beginning point if mid value < value
        else
        {
            begg = mid + 1;
        }
    }
    return false;
}

// sorting function
void bubble_sort(int values[], int n)
{
    int i = 0, temp = 0, count = 5;
    while (count != 0)
    {
        count = 0;
        for(i = 0; i < (n - 1); i++)
        {
            if (values[i] < values[i + 1])
            {
                continue;
            }
            
            else
            {
                temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                count++;
            }
        }
        continue;
    }
}
/* Returns true if value is in array of n values, else false. */
bool search(int value, int values[], int n)
{
    // calls binary search only when #elements > 0
    if (value < 0)
    {
        return false;
    }
    // returns true if found else returns false
    else
        return b_search(value, values, n);
}

// calls sorting function
void sort(int values[], int n)
{
    bubble_sort(values, n);
    return;
}

