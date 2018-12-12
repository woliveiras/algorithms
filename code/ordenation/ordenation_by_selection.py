def find_minor(arr):
    minor = arr[0]
    minor_index = 0

    for i in range(0, len(arr)):
        if arr[i] < minor:
            minor = arr[i]
            minor_index = i
    return minor_index

def ordenation_by_selection(arr):
    new_arr = []

    for i in range(0, len(arr)):
        minor = find_minor(arr)
        new_arr.append(arr.pop(minor))
    return new_arr

print(ordenation_by_selection([5, 2, 1, 4, 3, 6, 9, 7, 8]))