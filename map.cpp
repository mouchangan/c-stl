//#include <map>
//#include <iostream>
//#include <algorithm>
//#include <functional>
//using namespace std;
//
//void fun(pair<int, char> pr)
//{
//	cout << pr.first << " " << pr.second << endl;
//}
//
//void MapConstruct()
//{
//	typedef pair<int, char> in_pair;
//	pair<map<int,char>::iterator, bool> pr;
//
//	map<int, char> mp; //< \ >
//	mp.insert(pair<int, char>(1, 'a'));
//	pr = mp.insert(in_pair(3, 'a'));
//	//cout << pr.second << endl;
//	pr = mp.insert(in_pair(5, 'b'));
//	//cout << pr.second << endl;
//	pr = mp.insert(in_pair(7, 'b'));
//	pr = mp.insert(in_pair(9, 'b'));
//	pr = mp.insert(in_pair(11, 'b'));
//	pr = mp.insert(in_pair(13, 'b'));
//
//	map<int, char>::iterator ite = mp.begin();
//	ite++;
//	ite++;
//	ite++;
//	ite++;
//	mp.insert(ite, in_pair(2, 'b'));
//
//
//	map<int, char> mp1;
//	mp1.insert(in_pair(4, 'd'));
//	mp1.insert(in_pair(6, 'd'));
//	mp1.insert(mp.begin(), mp.end());
//
//
//	map<int, char> mp2(mp1);
//	map<int, char> mp3(mp2.begin(), mp2.end());
//
//	for_each(mp3.begin(), mp3.end(), fun);
//}
//
//void MapOther()
//{
//	typedef pair<int, char> input_pair;
//	map<int, char> mp;
//
//	mp.insert(input_pair(1, 'a')); //
//	mp.insert(input_pair(5, 'b'));
//	mp.insert(input_pair(6, 'c'));
//	mp.insert(input_pair(9, 'd'));
//	mp.insert(input_pair(15, 'e'));
//
//	//cout << mp.size() << endl;
//	//cout << mp.count(11) << endl;
//	//cout << mp.empty() << endl;
//
//	//cout << mp.lower_bound(6)->first << endl;
//	//cout << mp.upper_bound(5)->first << endl;
//	
//
//	map<int, char>::iterator ite = mp.begin();
//
//	for (ite; ite != mp.end(); ite++)
//	{
//		cout << ite->first << " " << ite->second << endl;
//	}
//}
//
//void MapDelete()
//{
//	typedef pair<int, char> in_pair;
//	map<int, char> mp;  //sort()
//
//	mp.insert(in_pair(1, 'a')); // 7 5 3 1
//	mp.insert(in_pair(3, 'b'));
//	mp.insert(in_pair(5, 'c'));
//	mp.insert(in_pair(7, 'd'));
//
//	//if (mp.end() == mp.find(3))
//	//{
//	//	cout << "ok";
//	//}
//
//	cout << mp.lower_bound(4)->first << endl;
//	cout << mp.upper_bound(4)->first << endl;
//
////	cout << mp.find(6)->first << endl;
//	
//	//ite++;
//	//ite++;
//
//	////mp.erase(ite, mp.end());
//	//mp.erase(3);
//
//	//ite = mp.begin();
//	//map<int, char, greater<int>>::iterator ite = mp.begin();
//
//	///*map<int, char>::iterator ite1 = mp.find(2);
//	//cout << ite1->first << " " << ite1->second << endl;*/
//
//	//for (ite; ite != mp.end(); ite++)
//	//{
//	//	cout << ite->first << " " << ite->second << endl;
//	//}
//}
//
//int main()
//{
//	//MapConstruct();
//	//MapOther();
//	MapDelete();
//
//	system("pause");
//	return 0;
//}