/////*
////
////#########################
////#                       #
////#        OMANSAK        #
////#                       #
////#########################
////*/
//
//// i = O Anki Sat�r Numaras� j= O anki sutun numaras� C= Toplam Sutun numaras�
////Pointerdaki yeri : (i*C)+j
//#include <stdio.h>
//#include <string.h>
//#include <limits.h>
//#define FALSE 0
//#define TRUE 1
//#define N 6 // Dizi Boyutu
//int Path[N], Visited[N], Index = 0;
//int MinPath[N], MinIndex, Min = INT_MAX;//INT_MAX : C Compilera g�re Int16 bitteki MAX Say�. Min = 99999 bu �ekildede olablirdi
//void PrintElements(int *Graph)
//{
//	puts("# Avaible Path #");
//	int i, Amount = 0;
//	for (i = 0; i < Index; i++)
//	{
//		printf(" %d ", Path[i]);
//	}
//	Amount = CalculatePath(Graph);
//	printf("= %d", Amount);
//	printf("\n");
//	if (Min > Amount)
//	{
//		memcpy(MinPath, Path, N);//�ki Diziyi birbirine e�itleme diger yollar i�in http://stackoverflow.com/questions/7882735/why-cant-i-assign-arrays-as-a-b
//		MinIndex = Index;
//		Min = Amount;
//	}
//
//}
//int CalculatePath(int *Graph)
//{
//	int x = 0;
//	for (int i = 0; i < Index - 1; i++)
//	{
//		x += Graph[(Path[i] * N) + Path[i + 1]];
//	}
//	return x;
//}
//void FindPath(int *Graph, int From, int To)
//{
//	Visited[From] = TRUE;
//	Path[Index] = From;
//	Index++;
//	if (From == To)
//	{
//		PrintElements(Graph);
//	}
//	else
//	{
//		int i;
//		for (i = 0; i < N; i++)
//		{
//			if (Visited[i] == FALSE && Graph[(From*N) + i] > 0)
//				FindPath(Graph, i, To);
//		}
//	}
//
//	Visited[From] = FALSE;
//	Index--;
//}
//void main()
//{
//
//	int **Graph[N][N] =
//	{
//		{ 0,16,0,0,19,21 },
//		{ 16,0,5,6,0,11 },
//		{ 0,5,0,10,0,0 },
//		{ 0,6,10,0,18,14 },
//		{ 19,0,0,18,0,33 },
//		{ 21,11,0,14,33,0 } };
//
//	FindPath(Graph,0, 5);
//	printf("The Shortest Path : ");
//	for (int i = 0; i < MinIndex; i++)
//	{
//		printf(" %d ", MinPath[i]);
//	}
//	printf(" = %d ", Min);
//	getch();
//}