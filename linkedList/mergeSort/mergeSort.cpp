#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void merge(int *left, int lenLeft, int *right, int lenRight, int *unsort)
{
    //int lenLeft = sizeof(left);
    //int lenRight = sizeof(right);

    int i, j, k = 0;

    while (i < lenLeft && j < lenRight)
    {
        if (left[i] < right[j])
        {
            unsort[k] = left[i];
            ++i;
        }
        else
        {
            unsort[k] = right[j];
            ++j;
        }
        ++k;
    }
    while (i < lenLeft)
    {
        unsort[k] = left[i];
        ++i;
        ++k;
    }
    while (j < lenRight)
    {
        unsort[k] = right[j];
        ++j;
        ++k;
    }
}

void mergeSort(int unsort[], int unsortLength)
{
    if (unsortLength == 1)
        return;
    int middle = unsortLength / 2;
    //cout << unsortLength << " " << middle << endl;
    int *left= new int[middle];
    int *right= new int[unsortLength];



    for (int i = 0; i < middle; i++){
        left[i] = unsort[i]; 
        cout << i << " ";}

    for (int j = middle; j < unsortLength; j++){
        right[j] = unsort[j];
        cout << j << " ";}



    mergeSort(left, middle);
    mergeSort(right, unsortLength - middle);
    merge(left, middle, right, unsortLength-middle, unsort);
    free(left);
    free(right);
}




int main()
{
    int unsorted[] = {2, 3, 1, 6, 7, 9, 4, 5};
    int sizeOfUnsort = (sizeof(unsorted) / sizeof(*unsorted));
    //cout << "Size of unsort = " << sizeOfUnsort << endl;
    

    mergeSort(unsorted, sizeOfUnsort);


//This isn't printing for some reason. Not sure why. fix still
    for (int i = 0; i < sizeOfUnsort; i++)
        cout << unsorted[i] << " ";
    cout << "This is the array: " << endl;
    

    return 0;
}