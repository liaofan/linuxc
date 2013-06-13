#include<stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int stack[20];
int top = 0;

void push(int p)
{
	stack[top++] =p;
}

int pop()
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
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 1, 0};

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

int predecessor[MAX_ROW][MAX_COL] = {-1};

void visit(int row, int col, int pre)
{
	maze[row][col] = 2;
	predecessor[row][col] = pre;
	push(row * 10 + col);
}

/* void printorder()
{
	int top=0;
	struct point order[50],p;
	p.row = MAX_ROW-1, p.col = MAX_COL-1;
	order[top++] = p;
	p = predecessor[p.row][p.col];
	while (p.row != -1) {
		order[top++]=p;
		p = predecessor[p.row][p.col];
	}
	while (--top >= 0)
		printf("(%d, %d)\n", order[top].row, order[top].col);
}
*/

int main(void)
{
	int p = 0;
	int row = p / 10, col = p % 10;
	maze[row][col] = 2;
	push(p);

	while (!is_empty()) {
		p = pop();
		row = p / 10, col = p % 10;
		if (row == MAX_ROW - 1 /*  goal */
		    && col == MAX_COL - 1)
			break;
		if (col+1 < MAX_COL/*  right */
        	    && maze[row][col+1] == 0)
			visit(row, col+1, row*10+col);
		if (row+1 < MAX_ROW/*  down */
		    && maze[row+1][col] == 0)
			visit(row+1, col, row*10+col);
		if (col-1 >= 0/*  left */
		    && maze[row][col-1] == 0)
			visit(row, col-1, row*10+col);
		if (row-1 >= 0/*  up */
		    && maze[row-1][col] == 0)
			visit(row-1, col, row*10+col);
		print_maze();
	}
	
	if (row == MAX_ROW - 1 && col == MAX_COL - 1) {
		printf("(%d, %d)\n", row, col);
		while (predecessor[row][col] != -1) {
			p = predecessor[row][col];
			row = p / 10, col = p % 10;
			printf("(%d, %d)\n", row, col);
		}	
	} else
		printf("No path!\n");

	//printorder();
	
	return 0;
}

