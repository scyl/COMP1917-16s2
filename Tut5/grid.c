#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FALSE 0
#define TRUE 1
#define SIZE 10

int find_in_grid( int num, int grid[SIZE][SIZE], int size);
void fill_grid(int grid[SIZE][SIZE], int size);
void print_grid(int grid[SIZE][SIZE], int size);

int main(int argc, char *argv[]) {

    int grid[SIZE][SIZE];
    int locate = 0;
    fill_grid(grid,SIZE);
    print_grid(grid,SIZE);

    printf("Enter a number to locate: ");
    scanf("%d", &locate);

    if(find_in_grid(locate, grid, SIZE)){
        printf("Number found\n");
    } else {
        printf("Nuber not found\n");
    }
    
    return EXIT_SUCCESS;
}

int find_in_grid( int num, int grid[SIZE][SIZE], int size){
	int x = 0;
	int y = 0;
	int returnValue = 0;
	
	while(y < size) {
		while(x < size) {
			if (grid[y][x] == num) {
				returnValue = 1;
			}
			x++;
		}
		y++;
	}
	
	return returnValue;
}


void fill_grid(int grid[SIZE][SIZE], int size){
    if(grid == NULL){
      return;
    }

    int i = 0;
    int j = 0;
    srand(time(NULL));

    while(i < size){
        j = 0;
        while(j < size){
            grid[i][j] = rand() % 107;
            j++;
        }
        i++;
    }
}

void print_grid(int grid[SIZE][SIZE], int size){
   int i = 0;
   int j = 0;

   while(i < size){
      j = 0;
      while(j < size){
         printf("%3d ",grid[i][j]);
         j++;
      }
      printf("\n");
      i++;
   }

}