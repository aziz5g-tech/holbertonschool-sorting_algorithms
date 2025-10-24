# Sorting Algorithms Implementation

A comprehensive collection of fundamental sorting algorithms implemented in C with time complexity analysis.

## Overview

This repository contains efficient implementations of classic sorting algorithms, each optimized for different use cases and data structures. The implementations include detailed time complexity analysis and visualization capabilities to demonstrate the sorting process.

## Features

- 🚀 **Optimized C implementations** of fundamental sorting algorithms
- 📊 **Time complexity analysis** with Big O notation
- 🔍 **Step-by-step visualization** of the sorting process
- 📋 **Support for arrays and linked lists**
- ⚡ **Memory-efficient algorithms**
- 🧪 **Ready-to-use functions** with comprehensive documentation

## Algorithms Implemented

### Bubble Sort
- **Complexity**: O(n²) average and worst case, O(n) best case
- **Space**: O(1) auxiliary space
- **Stability**: Stable
- **Use case**: Educational purposes, small datasets

### Insertion Sort
- **Complexity**: O(n²) average and worst case, O(n) best case
- **Space**: O(1) auxiliary space
- **Stability**: Stable
- **Use case**: Small datasets, nearly sorted arrays, online algorithms

### Selection Sort
- **Complexity**: O(n²) for all cases
- **Space**: O(1) auxiliary space
- **Stability**: Unstable
- **Use case**: Memory-constrained environments, small datasets

### Quick Sort
- **Complexity**: O(n log n) average case, O(n²) worst case
- **Space**: O(log n) auxiliary space
- **Stability**: Unstable
- **Use case**: General-purpose sorting, large datasets

## Project Structure

```
├── sort.h                      # Header file with function prototypes
├── 0-bubble_sort.c            # Bubble sort implementation
├── 0-O                        # Bubble sort time complexity
├── 1-insertion_sort_list.c    # Insertion sort for linked lists
├── 1-O                        # Insertion sort time complexity
├── 2-selection_sort.c         # Selection sort implementation
├── 2-O                        # Selection sort time complexity
├── 3-quick_sort.c             # Quick sort implementation
├── 3-O                        # Quick sort time complexity
└── README.md                  # This file
```

## Data Structures

### Array Operations
```c
void print_array(const int *array, size_t size);
```

### Doubly Linked List
```c
typedef struct listint_s {
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
```

## API Reference

### Bubble Sort
```c
void bubble_sort(int *array, size_t size);
```
Sorts an array using the bubble sort algorithm with optimizations for early termination.

### Insertion Sort
```c
void insertion_sort_list(listint_t **list);
```
Sorts a doubly linked list using insertion sort, maintaining list structure integrity.

### Selection Sort
```c
void selection_sort(int *array, size_t size);
```
Sorts an array by repeatedly selecting the minimum element and placing it at the beginning.

### Quick Sort
```c
void quick_sort(int *array, size_t size);
```
Sorts an array using the quick sort algorithm with Lomuto partition scheme.

## Compilation

### Requirements
- GCC compiler
- C99 standard or later
- No external dependencies

### Build Instructions
```bash
# Compile individual algorithms
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-bubble_sort.c -o bubble_sort

# Compile with test files (example)
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o sorting_demo
```

### Compiler Flags Explained
- `-Wall`: Enable all common warnings
- `-Wextra`: Enable extra warning flags
- `-Werror`: Treat warnings as errors
- `-pedantic`: Strict ISO C compliance
- `-std=gnu89`: Use GNU C89 standard

## Usage Examples

### Basic Array Sorting
```c
#include "sort.h"

int main(void) {
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t size = sizeof(array) / sizeof(array[0]);
    
    printf("Original array:\n");
    print_array(array, size);
    
    bubble_sort(array, size);
    
    printf("Sorted array:\n");
    print_array(array, size);
    
    return 0;
}
```

### Expected Output
```
Original array:
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
...
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

Sorted array:
7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

## Time Complexity Analysis

| Algorithm | Best Case | Average Case | Worst Case | Space Complexity |
|-----------|-----------|--------------|------------|------------------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) |

## Algorithm Selection Guide

| Scenario | Recommended Algorithm | Reason |
|----------|---------------------|---------|
| Small datasets (< 50 elements) | Insertion Sort | Simple, efficient for small inputs |
| Nearly sorted data | Insertion Sort | O(n) best case performance |
| Memory-constrained | Selection Sort | Minimal swaps, O(1) space |
| General purpose | Quick Sort | Good average performance |
| Guaranteed O(n log n) | Merge Sort* | Consistent performance |

*Merge Sort implementation not included in this repository

## Performance Characteristics

### Stability
- **Stable**: Bubble Sort, Insertion Sort
- **Unstable**: Selection Sort, Quick Sort

### In-place Sorting
All implemented algorithms sort in-place with O(1) or O(log n) auxiliary space.

## Author

This project is part of the Holberton School curriculum on Sorting Algorithms.

**Team:**
- Abdulaziz Hamed (aziz5g-tech)
- Norah Mohammed (noneals)
