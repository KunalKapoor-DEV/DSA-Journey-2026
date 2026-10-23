# UWCOI20A - Rating 650

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Find maximum in an Array

Given a list of $N$ integers, representing height of mountains. Find the height of the tallest mountain.

### Input:
- First line will contain $T$, number of testcases. Then the testcases follow.
- The first line in each testcase contains one integer, $N$.
- The following line contains $N$ space separated integers: the height of each mountains.
### Output:

For each testcase, output one line with one integer: the height of the tallest mountain for that test case.

### Constraints
- $1 \leq T \leq 10$
- $1 \leq N \leq 100000$
- $0 \leq$ height of each mountain $\leq 10^9$
### Sample 1:
Input
Output

```
1
5
4 7 6 3 1
```

```
7
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-23T05:58:15.029Z  

```c_cpp
#include <stdio.h>

void maximum(int *arr, int N);


int main ()
{
    int T, N;
    int j = 0;
    
    scanf("%d", &T);

    while(j < T)
        {
            int i = 0;
            scanf("%d", &N);

            int arr[100000];

                while(i < N)
                {
                    scanf("%d", &arr[i]);
                    ++i;
                }

            maximum(arr, N);
            ++j;
        }

    return 0;
}


void maximum(int *arr, int N)
{
    int Max = arr[0];

    int i = 1;

    while(i < N)
    {
        if(Max < arr[i])
        {
            Max = arr[i];
        }
        ++i;
    }

    printf("%d\n", Max);
}

```

---

[View on CodeChef](https://www.codechef.com/problems/UWCOI20A)