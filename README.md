## Sorting Algorithms

Project where we will need to implement some known sorting algortihms.

The objective is to build functions to sort an Array of numbers in a **ascending order**

#### Bubble Sort / 0-buble_sort.c

- Will start a cicle to travel the array from the first position
- It will start doing a comparision between the 2 first values of the array
- It will verify wich number is smaller, and will swap the value to the left is the smaller is found at the right
- If not, it will continue doing comparisions with the following values in the array order
- The comparisions are made one by one in ascending order until the cicle reaches the end of the array
- Once the end of the array is reached, the cicle will restart doing same comparisions from the first position of the array
- The array will be traveled many times until all the nums gets completely ordered from smaller to bigger 

#### Insertion sort / 1-insertion_sort.c

- Will recieve a pointer to the first node of a a doubly linked list
- Will start a cicle traveling the list from the first node
- It will store the adress of the "next" node as pointer to remember how to travel the list
- Will take first 2 nodes and do a comparision of ints, of which of two is smaller
- If the samller int is found at the right, it will swap it to the left
- This time, the traveling will continue backwards and do comparisions with previous nodes
- The cicle will keep swaping the smaller ones to the left
- If ther is no smaller numbers behind are found, it will continue traveling the list forward from the last saved adress
- Once the end of list is reached, the cicle will restart doing same comparisions from the first node respecting the travel behavior
- The list will be traveled many times, foward and backwards until the algorithm does all the verifications in the nodes of ints already swapped

#### Selection Sort / 2-selections_sort.c

- Will take the first number of the array and save his position in a index variable 
- Will start a cicle to travel the array and do comparisions between the first 2 numbers
- Will take the smaller number found and swap it to the left
- Will store the smaller number found in a temporal variable to continue comparing with other next numbers in the array order
- The cicle will keep traveling the array comparing number by number which is smaller until it reaches the end of the array
- Once the first travel its completed it will sum +1 to the index variable and restart the travel from the resulting index position
- This time, will take the value found at the resulting index position to replace the temporal variable and do same comparisions until last num of the array
- The function will repeat this behavior until the array gets completely traveled with the index++

#### Quick Sort / 3-quick_sort.c

This function will initialize many variables:
- Temporal variables: which is going to take the value at the first position of the array, to stasrt the first round of comparisions
- Counter variables: This will be used to travel the array
- This algorithm will start a first cicle where the travel it's going to be backwards from the last poisition of the array.
- Once the travel begins, the algorithm will start doing a comparision between the Temporal variable with the first value found in the travel
- If the first number found is smaller than Temp variable, a swap will be made
- Once the first swap is done the Counter variable will be updated with +1
- And the Temporal value will be updated with the last swap position
- At this point we can understand that the array will be traveled foward and backwrds
- Doing comparisions in sequences  
- If dont't, the cicle will continue traveling the array backwards 
...(will continue)

## Big O Notation

Will be tested with Big O Notation to understand his complexity.

    O(1)
    O(n)
    O(n!)
    n square -> O(n^2)
    log(n) -> O(log(n))
    n * log(n) -> O(nlog(n))
    n + k -> O(n+k)
    …

The notation will be saved as readable "*-O files"

Function files used for this excersice:

| Files/Functions           | Use/Description                                           |
| ------------------------- | --------------------------------------------------------- |
| sort.h                    | Header file with function prototypes                      |
| print_array               |                                                           |
| print_list                |                                                           |
| swap                      |                                                           |
| swap_node                 |                                                           |
| partition                 |                                                           |
| pivot_setter              |                                                           |
| buble_sort                |                                                           |
| insertion_sort            |                                                           |
| selections_sort           |                                                           |
| quick_sort                |                                                           |
