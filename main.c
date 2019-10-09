#include <stdio.h>
#include <stdlib.h>
#include "grid.h"

int main()
{
    int players[2] = {0};
    int rows = 0, columns = 0;
    printf("Combien de lignes ?\t");
    scanf("%d", &rows);
    printf("\nCombien de colonnes ?\t");
    scanf("%d", &columns);
    char** grid = init(rows, columns);
    displayArray2D(grid, rows, columns);
    freeGrid(grid, rows);
    displayArray2D(grid, rows, columns);
    return 0;
}
