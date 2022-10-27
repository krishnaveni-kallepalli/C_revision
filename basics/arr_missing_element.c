#include<stdio.h>

void missing_elements(int vec[], int n)
{
    int mis[n];
    for (int i = 0; i < n; i++)
        mis[i] = -1;
 
    // For every given element
    for (int i = 0; i < n; i++) {
 
        // Find its index
        int temp = abs(vec[i]) - 1;
 
        // Update the element at the found index
        vec[temp] = vec[temp] > 0 ? -vec[temp] : vec[temp];
    }
    // Current element was not present
    // in the original vector
    for (int i = 0; i < n; i++)
        if (vec[i] > 0)
            mis[i] = (i + 1);
 
    int miss_ele_size = sizeof(mis) / sizeof(mis[0]);
    for (int i = 0; i < miss_ele_size; i++) {
        if (mis[i] != -1)
            printf("%d ", mis[i]);
    }
}
 
// Driver code
int main()
{
    int vec[] = { 1,2,3,5,6 };
    int vec_size = sizeof(vec) / sizeof(vec[0]);
    missing_elements(vec, vec_size);
    return 0;
}

