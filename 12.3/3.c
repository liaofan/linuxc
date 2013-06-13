#include<stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

struct point { int row, col; } stack[512];
int top = 0;

void push(struct point p)
{
	stack[top++] = p;
}

struct point pop(void)
{
	return stack[--top];
}

int is_empty(void)
{
	return top == 0;
}

int maze[MAX_ROW][MAX_COL] = {
	0, 1, 0, 0, 0,
	0, 1, 0, 1, 0,
	0, 0, 1, 0, 0,
	0, 1, 0, 0, 1,
	0, 0, 0, 0, 0};

void print_maze(void)
{
	int i, j;
	for (i = 0; i < MAX_ROW; i++) {
		for (j = 0; j < MAX_COL; j++)
			printf("%d ", maze[i][j]);
		putchar('\n');
	}
	printf("*********\n");
}

int print(int row, int col)
{
	maze[row][col]=2;
	print_maze();
	if (row == MAX_ROW - 1  && col == MAX_COL - 1) {
		printf("(%d, %d)", row, col);
		return 1;
	}
	if (col+1 < MAX_COL && maze[row][col+1] == 0) {
		if (print(row, col+1) == 1) {
			printf("(%d, %d)", row, col);
			return 1;
		}
	}		
	if (row+1 < MAX_ROW && maze[row+1][col] == 0) {
		if (print(row+1, col) == 1) {
			printf("(%d, %d)", row, col);
			return 1;
		}
	}			
	if (col-1 >= 0 && maze[row][col-1] == 0) {
		if (print(row, col-1) == 1) {
			printf("(%d, %d)", row, col);
			return 1;
		}
	} 
	if (row-1 >= 0 && maze[row-1][col] == 0) {
		if (print(row-1, col) == 1) {
			printf("(%d, %d)", row, col);
			return 1;
		}
	}
	return 0;
}

int main(void)
{
	print(0, 0);
	return 0;
}

