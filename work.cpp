//#include<iostream>
//#include"work.h"
//#include"myconsole.h"
//#include"mygraphics.h"
//#include<string>
//#include<sstream>
//using namespace std;
//
//
//int main()
//{
//	cout << "-------------------------\n";
//	Quee e;
//	int k, n, d;
//	int key = 0;
//	int coun = 0;
//	int x = 150;
//	int y = 120;
//	bool stop = false;
//	bool specialKey = false;
//	cout << endl << endl << endl << endl << endl << endl;
//	cout << "Enter the number of people : ";
//	cin >> n;
//	cout << "Enter the number of pass : ";
//	cin >> k;
//	system("CLS");
//	int opt;
//	cout << endl << endl << endl << endl << endl << endl;
//	cout << "Enter 1 for showing with graphics \nEnter 2 for showing with numbers\n ";
//	cin >> opt;
//	system("CLS");
//	myDrawTextWithFont(160, 160, 30, "--Starting Game--", RGB(200, 0, 0), RGB(0, 222, 145));
//	Sleep(100);
//	system("CLS");
//	myDrawTextWithFont(140, 100, 50, "Josephus Game", RGB(200, 0, 0), RGB(0, 222, 145));
//	Sleep(100);
//	if (opt == 1)
//	{
//		for (int i = 1, x1 = 51, y1 = 300, x2 = 101, y2 = 340; i <= n; i++, x1 += 54, x2 += 54)
//		{
//			myEllipse(x1, y1, x2, y2, RGB(255, 200, 200), RGB(255, 200, 200));
//			Sleep(200);
//			
//			
//			int b = i;
//			ostringstream ss;
//			ss << b;
//			string a = ss.str();
//			myDrawText(x1 + 22, y1 + 10, 20, a, RGB(255, 255, 255), RGB(0, 0, 255));
//			e.EnQuee(i);
//			b++;
//
//		}
//		Sleep(1000);
//
//		int a = n;
//		int count = -1;
//		while (n > 1)
//		{
//			for (int i = 1; i <= k; i++)
//			{
//				e.MoveNext();
//			}
//			int s = e.Front();
//			e.DeQuee();
//	
//
//			int p1 = 51;
//			int p2 = 101;
//			int q1 = 300;
//			int q2 = 340;
//			for (int a = 1; a < n; a++, p1 += 54,p2+=54)
//			{
//				if (a == s)
//				{
//					myEllipse(p1, q1, p2, q2, RGB(0, 0, 0), RGB(0, 0, 0));
//					Sleep(1000);
//				}
//			}
//
//		    n--;
//		}
//	}
//	else if (opt == 2)
//	{
//		int i;
//		for (i = 1; i <= n; i++)
//		{
//			e.EnQuee(i);
//		}
//		cout << endl << endl << endl << endl << endl << endl;
//		cout << "The players are given below ";
//		cout << endl;
//        e.Print();
//	    cout << endl;
//		while (n > 1)
//		{
//			for (i = 1; i <= k; i++)
//				e.MoveNext();
//			e.DeQuee();
//			e.Print();
//			cout << endl;
//			n--;
//		}
//		cout << endl;
//	}
//	else
//	{
//		cout << "Wrong Input\n";
//	}
//
//
//
//	system("pause");
//}
//
//
//
//
