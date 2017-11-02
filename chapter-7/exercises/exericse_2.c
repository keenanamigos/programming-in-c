/* 
    Modify program 7.1 (first_array.c) so that the elements of the array 'values' are all initialially set to 0.
    Use a for loop for the initialization.
*/

#include <stdio.h>

int main(void)
{
    int values[10]; 
    int index;

    for (int i = 0; i < 10; ++i)
    {
       values[i] = 0; 
    }
    
    // Test to prove values have been initialized to 0.
    // for (int i = 0; i < 10; ++i)
    // {
    //     printf("Test: values[%i] = %i\n", i, values[i]);
    // }

    values[0] = 197;
    values[1] = -100;
    values[2] = 350;
    values[3] = values[0] + values[5];
    values[9] = 
    values[5] / 10;
    --values[2];

    for (index = 0; index < 10; ++index)
    {
        printf("values[%i] = %i\n", index, values[index]);
    }

    return 0;
}