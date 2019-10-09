#include <stdio.h>
#include <stdlib.h>


void freeGrid(char** grid, int rows) {
    for(int i = 0; i < rows; i++) {
        free(grid[i]);
    }
    free(grid);
}

void displayArray2D(char** grid, const int rows, const int columns) {
    for(int i = 0; i < rows; i++) {
            printf("%d", i + 1);
        for(int j = 0; j < columns; j++) {
            printf(" | %c", grid[i][j]);
        }
        printf("\n");
    }
    printf("    ");
    for(int k = 0; k < columns; k++) {
        printf("%d   ", k + 1);
    }
}

char** init(int rows, int columns) {
    char** grid = malloc(sizeof(char*) * rows);
    if(grid != NULL) {
        for(int i = 0; i < rows; i++) {
            grid[i] = malloc(sizeof(char) * columns);
            if(grid[i] == NULL) return NULL;
            for(int j = 0; j < columns; j++) {
                grid[i][j] = ' ';
            }
        }
    }
    return grid;
}
