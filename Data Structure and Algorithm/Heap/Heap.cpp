
#include <bits/stdc++.h>
using namespace std;

int left(int i)
{
    return 2 * i;
}
int right(int i)
{
    return 2 * i + 1;
}

int parent(int i)
{
    return i / 2;
}

// void max_heapify(int H[], int heap_size, int i)
void max_heapify(int *H, int *heap_size, int *i1)
{
    int i = *i1;
    int size = *heap_size;

    int l, r, largest, temp;
    l = left(i);  //l = left child index
    r = right(i); //r = right child index

    if (l <= size && H[l] > H[i])           //if left child is greater than parent then make the index largest 
    {
        largest = l;
    }
    else
    {
        largest = i;
    }
    
    if (r <= size && H[r] > H[largest])  //if right child is greater than parent then make the index largest 
    {
        largest = r;
    }

    if (largest == i)           //if largest and i(parent) match then return, else exchange largest index with parent index 
    {
        return;
    }
    temp = H[i];
    H[i] = H[largest];
    H[largest] = temp;

    max_heapify(H, &size, &largest);
}

int is_maxHeap(int *H, int *heap_size)
{
    int i, p, size = *heap_size;

    for (i = size; i > 1; i--)
    {
        p = parent(i);
        // printf("i: %d, p = %d \tH[i] = %d, H[p] = %d\n", i, p, H[i], H[p]);
        //check if parent is less than any of his child, if it is true then it is not a max heap
        if (H[p] < H[i])
        {
            return 0;
        }
    }
    return 1;
}

void build_max_heap(int *H, int *heap_size)
{
    int size = *heap_size;
    for (int i = size / 2; i >= 1; i--)        //heap_size/2 are already leaf, won't need to count them
    {
        max_heapify(H, &size, &i);
    }
}

void heap_sort(int *H, int *heap_size)
{
    int i,temp,root = 1,size = *heap_size;

    for (int i = size; i > 1; i--)
    {
        temp = H[1];
        H[1] = H[i];
        H[i] = temp;
        size -= 1;
        max_heapify(H,&size,&root);
    }
    
}

void print_heap(int *H, int *heap_size)
{
    int size = *heap_size;
    for (int i = 1; i <= size; i++)
    {
        cout << H[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int heap_size = 9;
    // int H[] = {0, 19, 7, 12, 3, 5, 17, 10, 1, 2}; //not a max heap
    // int H[] = {0, 19, 7, 17, 3, 5, 12, 10, 1, 2}; //max heap
    // int H[] = {0, 19, 7, 12, 3, 5, 17, 10, 1, 4}; //not a max heap
    int H[] = {0, 12, 7, 1, 3, 10, 17, 19, 2, 5}; //not a max heap
    printf("\nIt is %s", is_maxHeap(H, &heap_size) ? "a max heap" : "not a max heap");

    cout << "\nBefore max_heapify \nOutput: ";
    print_heap(H, &heap_size);
 
    build_max_heap(H, &heap_size);
    cout << "\nAfter build_max_heapify \nOutput: ";
    print_heap(H, &heap_size);

    heap_sort(H, &heap_size);
    cout << "\nAfter Heap sort \nOutput: ";
    print_heap(H, &heap_size);


}





