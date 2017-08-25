#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)

void main()
{
	//variable declaration
	int pointX[2];
	int pointY[2];
	double distance;

	//Input
	printf("Enter coordinates for (x1,y1) : ");
	scanf("%d %d", &pointX[0], &pointY[0]);
	printf("Enter coordinates for (x2,y2) : ");
	scanf("%d %d", &pointX[1], &pointY[1]);
	//process
	distance = sqrt(pow(pointX[0] - pointX[1], 2) + pow(pointY[0] - pointY[1], 2));
	//Output
	puts("");
	printf("Distance between the 2 points is %lf units", distance);

	puts("\n");
	system("pause");
}
