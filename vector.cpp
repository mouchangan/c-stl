//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//#include <ctime> //time.h
//#include <cstdio>
//#include <cstdlib>
//
//#include <functional>
//
//using namespace std;
//
//void STLDefine()
//{
//	struct STU
//	{
//		int age;
//	};
//
//	vector<char> vec; //  string 
//	
//	
//}
//
//void STLConstructor()
//{
//	vector<int> vec; //  string 
//	vector<int> vtc;
//
//	vec.reserve(10);
//	cout << vec.capacity() << endl;;
//	cout << (vec == vtc) << endl;;
//	
//	//cout << vec[0];
//	
//	vector<int> vec1(5);
//
//	vector<int> vec2(5, 43);
//
//	vector<int> vec3(vec1);
//
//	///=======================
//	vector<int>::iterator ite = vec2.begin();
//	vector<int>::iterator ite1 = vec2.end();
//
//	vector<int> vec4(ite, ite1);
//
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << vec4[i] << endl;
//	}
//}
//// 
//void STLCapacity()
//{
//	vector<int> vec;
//	//cout << vec.empty();
//	//vec.resize(3);
//	////vec.reserve(10);
//	//cout << vec.size() << endl;
//
//	////
//
//	//cout << vec.capacity() << endl;
//
//	//vector<int> vec1(5);
//
//	//cout << vec1.capacity() << endl;
//
//	//vec1.push_back(1); //5+5/2 == 10
//
//	//cout << vec1.capacity() << endl;
//
//	//vec1.push_back(1);
//	//vec1.push_back(1); //7 + 7/2 == 10
//
//	//cout << vec1.capacity() << endl;
//
//}
//
//void fun(int i)
//{
//	cout << i << endl;
//}
//
//void STLDO()
//{
//	vector<int> vec;
//
//	for (int i = 0; i < 10; i++)  //[]
//	{
//		vec.push_back(i);
//	}
//
//	vector<int>::iterator ite = vec.begin();
//
//	for (ite; ite != vec.end(); ite++)
//	{
//		 *ite = 12;
//	}
//
//	for_each(vec.begin(), vec.end(), fun);
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << vec[i] << endl;
//	//}
//
//
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << vec.at(i) << endl;
//	//}
//
//	//cout << vec.back();
//}
//void STLADD()
//{
//	vector<int> vec;
//
//// 	for (int i = 0; i < 10; i++)  //[]
//// 	{
//// 		vec.push_back(i);
//// 	}
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//	vec.push_back(4);
//	vec.push_back(5);
//
//	//sort(vec.begin(), vec.end(), greater<int>());
//	for_each(vec.begin(), vec.end(), fun);
//
//	srand((unsigned int)time(0));
//
//	random_shuffle(vec.begin(), vec.end());
//
//	for_each(vec.begin(), vec.end(), fun);
//
//
//
//	//vec.insert(vec.begin()+2, 12);
//	//vec.insert(vec.begin()+2, 5,12);
//
//	//vector<int> vec1(5,1);
//
//	//vec.insert(vec.begin()+3, vec1.begin(), vec1.begin()+3);
//
////	vec.pop_back();
////	vec.erase(vec.begin()+3, vec.end());
//
//	//vec.swap(vec1);
//	
//	//for_each(vec1.begin(), vec1.end(), fun);
//
//	//cout << (vec > vec1) << endl;
//}
//
//int main()
//{
//	//STLDefine();
//	//STLConstructor();
//	//STLCapacity();
//	STLADD();
//
//	system("pause");
//	return 0;
//}