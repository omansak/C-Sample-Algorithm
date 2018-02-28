///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//*/

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//struct LinkedList
//{
//	int Item;
//	struct LinkedList *Next;
//};
//typedef struct LinkedList *xList;
//xList GetNode()
//{
//	xList p;
//	p = (struct LinkedList*)malloc(sizeof(struct LinkedList));
//	return(p);
//}
//void Insert(xList Ptr, int pItem)
//{
//	xList newPtr;
//	if (Ptr == NULL)
//	{
//		printf("List is empty.");
//	}
//	else
//	{
//		newPtr = GetNode();
//		newPtr->Item = pItem;
//		newPtr->Next = Ptr->Next;
//		Ptr->Next = newPtr;
//
//	}
//
//
//}
//void GenerateRandom(int Array[])
//{
//	srand(time(NULL));// bu kod olmazsa surekli ayn� say� uretir
//	for (int i = 0; i < 100; i++)
//	{
//		int r = rand();//0 ile 100 aras� demek. int r = rand(); yazarsak C Compiler�n belirdigi MAX say� ile 0 aras� uretir
//		Array[i] = r;
//	}
//}
//void SortList(int Array[])
//{
//	//Insertion Sort
//	int Temp, x = 0;
//	for (int i = 1; i < 100; i++)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			if (Array[j] < Array[j - 1])
//			{
//				Temp = Array[j];
//				Array[j] = Array[j - 1];
//				Array[j - 1] = Temp;
//			}
//			else break;
//		}
//	}
//}
//void ListToLinkedList(xList Ptr, int Array[])
//{
//	for (int i = 0; i < 100; i++)
//	{
//		Insert(Ptr, Array[i]);
//	}
//}
//void Display(xList Ptr)
//{
//	for (xList q = Ptr->Next; q != NULL; q = q->Next)
//	{
//		printf("[%p]-[%p] \t:\t %d \n", q, q->Next, q->Item);
//	}
//}
//main()
//{
//	int Array[100];
//	double Start, Stop;
//
//
//	Start = (double)clock();
//	//Random Say� Uretme ve diziye atma
//	GenerateRandom(Array);
//	//Diziyi S�ralama Insertion Sort ile
//	SortList(Array);
//	//Head Olu�turma Tekli Linked List i�in
//	xList Head = GetNode();
//	Head->Item = NULL;
//	Head->Next = NULL;
//	//Diziden LinkedListe Atma
//	ListToLinkedList(Head, Array);
//	Stop = (double)clock();
//
//
//	Display(Head);
//	printf("Islem Suresi %f saniye", (Stop - Start) / CLOCKS_PER_SEC);
//	getch();
//
//
//}
