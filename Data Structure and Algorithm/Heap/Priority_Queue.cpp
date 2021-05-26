
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

    if (l <= size && H[l] > H[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }
    if (r <= size && H[r] > H[largest])
    {
        largest = r;
    }

    if (largest == i)
    {
        return;
    }
    temp = H[i];
    H[i] = H[largest];
    H[largest] = temp;
    max_heapify(H, &size, &largest);
    // max_heapify(H, heap_size, largest);
}

// int is_maxHeap(int H[], int heap_size)
int is_maxHeap(int *H, int *heap_size)
{
    // int i, p;
    int i, p, size = *heap_size;

    // for (i = heap_size; i > 1; i--)
    for (i = size; i > 1; i--)
    {
        p = parent(i);
        // printf("i: %d, p = %d \tH[i] = %d, H[p] = %d\n", i, p, H[i], H[p]);
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
    for (int i = size / 2; i >= 1; i--) //heap_size/2 are already leaf, won't count them
    {
        // max_heapify(H, heap_size, i);
        max_heapify(H, &size, &i);
    }
}

void heap_sort(int *H, int *heap_size)
{
    int i, temp, root = 1, size = *heap_size;

    for (int i = size; i > 1; i--)
    {
        temp = H[1];
        H[1] = H[i];
        H[i] = temp;
        size -= 1;
        // max_heapify(H, heap_size, 1);
        max_heapify(H, &size, &root);
    }
}

int get_maximum(int H[])
{
    return H[1];
}

int extract_max(int *H, int *heap_size)
{
    int size = *heap_size, root = 1;
    int max_item = H[1]; //assign top item
    H[1] = H[size];
    // cout<<"\n"<<H[1]<<"\n\n";
    size -= 1;
    max_heapify(H, &size, &root);
    // H[heap_size--];
    // cout << "\nSize of heap: " << heap_size << "\n";
    return max_item;
}

int insert_node(int *H, int *heap_size, int *node)
{
    int size = *heap_size, item = *node;
    int i, p, t;
    size += 1;      //heap size should be increased 
    H[size] = item;
    i = size;
    while (i > 1 && H[i] > H[parent(i)])
    {
        p = parent(i);
        t = H[p];
        H[p] = H[i];
        H[i] = t;

        i = p;      //changing the index number
    }
    return size;
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
    int H[] = {0, 19, 7, 17, 3, 5, 12, 10, 1, 2}; //max heap
    // int H[] = {0, 19, 7, 12, 3, 5, 17, 10, 1, 4}; //not a max heap
    // int H[] = {0, 12, 7, 1, 3, 10, 17, 19, 2, 5}; //not a max heap
    int item;
    printf("\nIt is %s", is_maxHeap(H, &heap_size) ? "a max heap" : "not a max heap");

    cout << "\nAfter max_heapify, Output: ";
    print_heap(H, &heap_size);

    build_max_heap(H, &heap_size);
    cout << "\nAfter build_max_heapify, Output: ";
    print_heap(H, &heap_size);
    cout << "\nMaximum Element: " << get_maximum(H);
    cout << "\tSize of heap: " << heap_size;
    cout << "\nPop out max element: " << extract_max(H, &heap_size);
    heap_size--;
    cout << "\nAfter extracting max element, Output: ";
    print_heap(H, &heap_size);
    cout << "\nSize of heap: " << heap_size;
    
    cout << "\nInsert element: ";
    cin >> item;

    cout << "\nAfter inserting \nsize of priority queue: " << insert_node(H, &heap_size, &item);
    cout << "\nOutput: ";
    heap_size++;
    print_heap(H, &heap_size);

    heap_sort(H, &heap_size);
    cout << "\nAfter Heap sort \nOutput: ";
    print_heap(H, &heap_size);
}