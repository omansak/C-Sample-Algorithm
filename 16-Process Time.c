///*
//
//#########################
//#                       #
//#        OMANSAK        #
//#                       #
//#########################
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//main()
//{
//	/*
//	Yap�lacak i�lemden �nce s�re al�n�r bittikten sonraki s�re al�n�r ve ��kar�l�r.
//	*/
//	double StartTime, StopTime;
//
//	StartTime = (double)clock();//(double)time(0);
//	printf("Start Time : %f\n", StartTime);
//	Foo();
//	StopTime = (double)clock();//(double)time(0);
//	printf("Stop Time : %f\n", StopTime);
//	printf("Islem Suresi : %f saniye\n", (StopTime - StartTime) / CLOCKS_PER_SEC);//CLOCKS_PER_SEC : Saniyedi i�lem say�s�
//	getch();
//}
//
////Herhangi uzun s�recek i�lemler
//Foo()
//{
//	double d = 0;
//	for (int n = 0; n < 100000; ++n)
//		for (int m = 0; m < 10000; ++m)
//			d += d*n*m;
//}