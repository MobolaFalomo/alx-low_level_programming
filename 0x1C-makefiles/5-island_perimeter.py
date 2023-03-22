#!/usr/bin/python3
def island_perimeter(grid):
    """
    Returns the perimeter of the island described in the input grid.

    Args:
        grid (List[List[int]]): A list of list of integers representing the grid.

    Returns:
        int: The perimeter of the island.

    Raises:
        ValueError: If the input grid is invalid.
    """

    if not grid:
        raise ValueError("Input grid is invalid: it is empty.")

    num_rows, num_cols = len(grid), len(grid[0])

    if num_rows == 0 or num_cols == 0:
        raise ValueError("Input grid is invalid: it has zero rows or zero columns.")

    perimeter = 0

    for i in range(num_rows):
        for j in range(num_cols):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
