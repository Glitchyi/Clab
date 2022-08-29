#include <stdio.h>
#include <stdlib.h>

int main()
{

    // This pointer will hold the
    // base address of the block created
    int *ptr;
    int n, i;

    // Get the number of elements for the array
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Entered number of elements: %d\n", n);

    // Dynamically allocate memory using malloc()
    ptr = (int *)malloc(n * sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {

        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
        printf("Size of pointer:, %d\n", sizeof(ptr));
        printf("Size of int:, %d\n", sizeof(*ptr));
        // Get the elements of the array
        for (i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }
        printf("size of unsigned long int:%d\nsize of unsigned int:%d\nsize of long int:%d\nsize of int:%d\n", sizeof(unsigned long int), sizeof(unsigned int), sizeof(long int), sizeof(int));
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i)
        {
            printf("%d, ", ptr[i]);
        }
        printf("\n");
        printf("Size of array:, %d\n", sizeof(ptr));
    }
    printf("\n");
    return 0;
}
