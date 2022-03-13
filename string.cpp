//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <functional>
//
//
//using namespace std;
//
//#pragma warning(disable:4996)
//#pragma warning(disable:4101)
//
////定义
//void StrDefine()
//{
//	string str;
//
//
//
//	cout << str << " " << str.empty() << endl;
//
//	string str1(5, 'a');
//
//	cout << str1 << " " << str1.empty() << endl;
//
//	string str2("abcdefg");
//
//	cout << str2 << endl;
//
//	string str3("abcdefg", 3);
//
//	cout << str3 << endl;
//
//	string str4(str2, 2, 3);
//
//	cout << str4 << endl;
//
//	string str5(str2);
//
//	cout << str5 << endl;
//
//
//}
//
////属性
//void StrPro()
//{
//	//string str;//15+N*16
//
//	//cout << str.length() << endl;
//
//	//string str1(5, 'a');
//	////str1.reserve(32);
//	//cout << str1.length() << endl;
//
//	string str2("abcdefg");
//	str2.resize(3);
//	cout << str2.size() << endl;
//	cout << str2.length() << endl;
//	cout << str2.capacity() << endl;
//	cout << str2 << endl;
//
//
//	//string str3("abcdefg", 3);
//	//cout << str3.capacity() << endl;
//
//	//string str4(str2, 2, 3);
//	//cout << str4.capacity() << endl;
//
//	//string str5(str2);
//	//cout << str5.capacity() << endl;
//}
//
////输出
//void StrCout()
//{
//	string str2("abcdefg");
//	cout << str2 << endl;
//
//	cout << str2.c_str() << endl;
//	
//	cout << str2[1] << endl;
//
//	//cout <<  << endl;
//
//	try
//	{
//		str2.at(8);//
//	}
//	catch(out_of_range& a)
//	{
//		cout << "越界了" << endl;
//	}
//}
//
//////修改
////void StrChange()
////{
////	string str2("abcdefg");
////	//str2[2] = 's';
////	//str2.at(3) = 'q';
////
////	//string str3("abcdef");
////
////	//str2.insert(str2.length(), 3, 'b');
////
////	//str2 += str3;
////
//////	str2 += "qweqwe";
////	//str2.append(2, 'w');
////
//////	str2 = str3;
//////	cin >> str2;
//////	str2.assign("qweer", 2);
////
////	str2.erase(0, str2.length());
////
////	cout << str2 << endl;
////}
//
////其他函数
//void StrFunction()
//{
//	string str2("aabrweq");
//	string str3("abr");   // abcdef  
//	                      // abd
//
//	//cout << (str2 <= str3) << endl;  //重载比较运算符， 结果是真和假
//
//	//cout << str2.compare("asd") << endl;
//
////	cout << str2.compare(1, 3, str3, 1, 2) << endl;
////	char arrStr[6] = {0};
////
////	str2.copy(arrStr, 3, 3);
//
//	//cout << (int)str2.find('b', 1);//
//
//	//cout << str2.substr(2, 4) << endl;
//	str2.swap(str3);
//	cout << str2 << endl;
//	cout << str3 << endl;
//	
//	cout << (str2+"qwe") << endl;
//}
//
//void FunIterator()
//{
//	string str("abcdefg");
//
//	string::iterator ite;  //  char char*   int*
//
//	//char* a = str.c_str();
//
//	ite = str.begin(); //end()
//
//	//for (ite; ite != str.end(); ite++)
//	//{
//	//	*ite = 'a';
//	//	//cout << *ite << " ";
//	//}
//
//	str.append(5, 'a');
//
//	ite[4] = 'w';
//
//	cout << str;
//
//	//for (size_t i = 0; i < str.size(); i++)
//	//{
//	//	cout << *ite << " ";
//	//	ite++;
//	//}
//
//	/*for (size_t i = 0; i < str.size(); i++)
//	{
//		cout << ite[i] << " ";
//	}*/
//}
//
//
//
//void testiterator()
//{
//	string str("abcefghiy");
//
////	string str1("efg");
//
/////	str.append(str1.begin()+1, str1.begin()+2);
//
////	str.erase(str.begin()+2, str.begin()+5);
//
//	//string str1("zxcvbn");
//
////	str.insert(str.begin()+2 , 3, 'N');
//
//	//str.insert(str.begin()+2 , str1.begin()+2, str1.begin()+4);
//
//
//
////	cout << str;
//}
//
//int fun(char c)
//{
//	cout << c;
//	return 0;
//}
//
//void FunForeach()
//{
//	string str("qweasdzxc");
//
//	for_each(str.begin(), str.end(), fun);
//	
//	sort(str.begin(), str.end()); //默认从小到大
//
//
//	sort(str.begin(), str.end(), greater<char>());
//
//	cout << endl;
//	
//	for_each(str.begin(), str.end(), fun);
//}
//
//int main()
//{
//	//StrDefine();
//
//	//StrPro();
//
//	// StrCout();
//	//StrChange();
//
//	//StrFunction();
//	//testiterator();
////	FunForeach();
//
//	int a;
//
//
//	
//
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//void exchange(int c, int d);
//void exchange1(int c, int d);
//void eschange2(int*a, int*b);
//int mian(void)
//{
//	int a = 12;
//	int b = 13;
//	printf("%d,%d\n", a, b);
//	exchange(a, b);
//	printf("%d,%d\n", a, b);
//
//	exchange1(a, b);
//
//	eschange2(&a, &b);
//
//	printf("%d,%d\n", a, b);
//
//	system("pause");
//	return 0;
//}
//void exchange(int c, int d)
//{
//	int moddle = c;
//	c = d;
//	d = moddle;
//}
//void exchange1(int c, int d)
//{
//	int moddle = c;
//	c = d;
//	d = moddle;
//	printf("%d,%d\n", c, d);
//}
//void eschange2(int*a, int*b)
//{
//	int moddle = *a;
//	*a = *b;
//	*b = moddle;
//}
//
