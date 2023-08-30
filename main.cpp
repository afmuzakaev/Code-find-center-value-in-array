def calculate_median(arr):
    arr.sort()  # Sort the array in ascending order
    n = len(arr)
    
    if n % 2 == 1:
        # If the array length is odd, return the middle element
        return arr[n // 2]
    else:
        # If the array length is even, return the average of the two middle elements
        mid1 = arr[n // 2 - 1]
        mid2 = arr[n // 2]
        return (mid1 + mid2) / 2

# Example usage
arr = [90, 100, 78, 89, 67]
median = calculate_median(arr)
print("Median:", median)
