def binary_search(list, item):
    """
        Binary Search with Python

        Returns the position of chosed item in a list
    
        To use run following:

            list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

            print binary_search(list, 3) // 3 is the bid
    """
    lower = 0
    higher = len(list) - 1

    while lower <= higher:
        middle = (lower + higher) / 2
        bid = list[middle]

        if bid == item:
            return middle
        
        if bid > item:
            higher = middle - 1
        else: 
            lower = middle + 1

    return None