#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("Elements are \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
    else
        printf("Array is full\n");
}

void Insert(struct Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return x;
    }
    return 0;
}

void Swap(int *x, int *y) 
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            Swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr, int key)
{
    int l, mid, h;
    l = 0;
    h = arr.length - 1;

    while (l <= h) 
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int Get(struct Array arr, int index)
{
    if (index >= 0 && index <= arr.length)
        return arr.A[index];
    return -1;
}

void Set(struct Array *arr, int index, int value)
{
    if (index >= 0 && index <= arr->length)
        arr->A[index] = value;
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
        if (arr.A[i] > max)
            max = arr.A[i];
    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
        if (arr.A[i] < min)
            min = arr.A[i];
    return min;
}

int Sum(struct Array arr)
{
    int sum = 0;
    for (int i; i < arr.length; i++)
        sum += arr.A[i];
    return sum;
}

float Avg(struct Array arr)
{
    return (float) Sum(arr) / arr.length;
}

void Reverse(struct Array *arr)
{
    int *B;
    int i, j;

    B = (int *) malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];

    for (i = 0; i < arr->length; i++)
        arr->A[i] = B[i];

}

void Reverse2(struct Array *arr)
{
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
        Swap(&arr->A[i], &arr->A[j]);
}

void InsertSort(struct Array *arr, int x)
{
    if (arr->length == arr->size)
        return;
    int i = arr->length - 1;
    while(i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

int isSorted(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
        if(arr.A[i] > arr.A[i+1])
            return 0;
    return 1;
}

void ReArrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0) i++;
        while (arr->A[j] >= 0) j--;
        if (i < j) Swap(&arr->A[i], &arr->A[j]);
    }
}

struct Array Merge(){
    struct Array result;
}

struct Array* Merge(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i=j=k=0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for (; i < arr1->A[i]; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr2->A[i]; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;
}

int main()
{
    //struct Array arr = {{2, -3, 25, 10, -15, -7}, 10, 6};

    //Append(&arr, 10);
    //Insert(&arr, 5, 10);
    //printf("%d\n", Delete(&arr, 4));
    //printf("%d\n", LinearSearch(&arr, 5));
    //printf("%d\n", BinarySearch(arr, 10));
    //printf("%f\n", Avg(arr));
    //Reverse2(&arr);
    //InsertSort(&arr, 1);
    //printf("%d \n", isSorted(arr));
    //ReArrange(&arr);
    //Display(arr);

    struct Array arr1 = {{2,6,10,15,25}, 10, 5};
    struct Array arr2 = {{3,4,7,18,20}, 10, 5};
    struct Array *arr3 = Merge(&arr1, &arr2);

    Display(*arr3);

    printf("\n\n\n\n\n\n\n\n\n\n");
    return 0;
}