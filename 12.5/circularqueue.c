/*
 * =====================================================================================
 *
 *       Filename:  circularqueue.c
 *
 *    Description:  BFS
 *
 *        Version:  1.0
 *        Created:  11/30/2012 01:27:11 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Fan Liao (), liaofan8@gmail.com
 *   Organization:  BST
 *
 * =====================================================================================
 */

#include<stdio.h>
#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

struct point { int row, col } queue[5];
int head = 0, tail = 0;

void enqueue(struct point p)
{
	tail = (tail + 1) % 5;
	printf("%d, %d, %d\n", tail, head, tail-head);
	if (tail == head) {
		printf("The Circual Queue is Full!\n");
		exit(1);
	}
	queue[tail] = p;
}

struct point dequeue(void)
{
	head = (head + 1) % 5;
	printf("%d, %d, %d\n", tail, head, tail-head);
	return queue[head];
}	

int is_empty(void)
{
	return head == tail;
}

int maze[MAX_ROW][MAX_COL] = {
	0, 1, 0, 0, 0,
	0, 1, 0, 1, 0,
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 1, 0,
};

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


void visit(int row, int col)
{
	struct point visit_point = { row, col };
	maze[row][col] = 2;
	enqueue(visit_point);
}


int main(void)
{
	struct point p = { 0, 0 };
	maze[p.row][p.col] = 2;
	enqueue(p);
	while (!is_empty()) {
		p = dequeue();
		if (p.row == MAX_ROW - 1 /*  goal */
		    && p.col == MAX_COL - 1)
			break;
		if (p.col+1 < MAX_COL/*  right */
	            && maze[p.row][p.col+1] == 0)
			visit(p.row, p.col+1);
		if (p.row+1 < MAX_ROW/*  down */
	  	    && maze[p.row+1][p.col] == 0)
			visit(p.row+1, p.col);
		if (p.col-1 >= 0/*  left */
		    && maze[p.row][p.col-1] == 0)
			visit(p.row, p.col-1);
		if (p.row-1 >= 0/*  up */
		    && maze[p.row-1][p.col] == 0)
			visit(p.row-1, p.col);
		print_maze();
	}
	if (p.row == MAX_ROW - 1 && p.col == MAX_COL - 1) {
		printf("There is a path!\n");
	} else
		printf("No path!\n");
	return 0;
}
