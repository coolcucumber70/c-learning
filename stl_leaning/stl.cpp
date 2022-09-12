#include<iostream>
using namespace std;
#include <map>
#include<vector>
//查找和统计
vector<int>v(3,0);
void test01()
{
	map<int, int>m; 
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 40));

	//查找
	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end())
	{
		cout << "找到了元素 key = " << (*pos).first << " value = " << (*pos).second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	//统计
	int num = m.count(5);//利用count来查是否有这个元素，count本质上就是用来表达0或者1
	cout << "num = " << num << endl;
}
void test02(vector<int>v){
	v.push_back(22);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
int main() {

	test02(v);

	//system("pause");

	return 0;
}