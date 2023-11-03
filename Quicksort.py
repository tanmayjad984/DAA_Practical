def quicksort(arr):
    if len(arr) <= 1:
        return arr

    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]

    return quicksort(left) + middle + quicksort(right)

# Example usage:
arr = [12, 4, 5, 6, 7, 3, 1, 15]
print("\nUnsorted array:", arr)

sorted_arr = quicksort(arr)
print("Sorted array:", sorted_arr, '\n')
