/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"
void bubble_sort(int values[], int n);
bool binary_search(int value, int values[], int n);
/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if (value < 0)
        return false;
    else
        return binary_search(value, values, n);
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    bubble_sort(values, n);
    return;
}

bool binary_search(int value, int values[], int n)
{
    
    int end = n-1;
    int begg = 0;

    while (end >= begg)
    {
        int mid = (begg + end) / 2;
        if (values[mid] == value)
            return true;
        else if (values[mid] > value)
            end = mid - 1;
        else
            begg = mid + 1;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
 void bubble_sort(int values[], int n)
 {
    int i, temp, count = 5;
    while (count != 0)
    {
        count = 0;
        for(i = 0; i < (n - 1); i++)
        {
            if (values[i] < values[i+1])
            {
                continue;
            }
            
            else
            {
               temp = values[i];
               values[i] = values [i + 1];
               values[i + 1] = temp;
               count++;
            }
        }
        continue;
    }
 }



    


