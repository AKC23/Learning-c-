/*
Tower of hanoi by recursive
It shows pass and movements
*/

#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
int pass = 0;

// void hanoi(int n, char from, char aux, char to)
void hanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        ++pass;
        printf("Pass: %d  ", pass);
        cout << " Move disc 1 from " << a << " to " << c << "\n";
        // printf("Move disk no. 1 from rod %c to rod %c\n", a, c);
        return;
    }
    else
    {
        hanoi(n - 1, a, c, b);
        ++pass;
        printf("Pass: %d  ", pass);
        cout << " Move disc " << n << " from " << a << " to " << c << "\n";
        // printf("Move disk no. %d from rod %c to rod %c\n", n, a, c);
        hanoi(n - 1, b, a, c);
    }
}

int main()
{
    int n;
    printf("Enter number of disks : ");
    scanf("%d", &n);
    // hanoi(n, 'A', 'C', 'B');           //All disks moving from A to B (auxiliary disk C)
    // hanoi(n, 'C', 'H', 'O');           //All disks moving from A to B (auxiliary disk C)

    hanoi(n, '1', '2', '3'); //All disks moving from 1 to 3 (auxiliary disk 2)
    // hanoi(n, '1', '3', '2');        //All disks moving from 1 to 2 (auxiliary disk 3)
}
