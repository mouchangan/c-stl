#include <set>
#include <string>
#include <iostream>
using namespace std;


int main()
{
	set<string> st;

	st.insert(string("abc"));
	st.insert(string("aba"));
	st.insert(string("abe"));
	st.insert(string("abf"));  //

	st.erase(string("abe"));
 	st.erase("abf"); //qwe

	set<string>::iterator ite = st.begin();

	for (ite; ite != st.end(); ite++)
	{
		cout << *ite << endl;
	}


 	system("pause");
	return 0;
}