#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<algorithm>

void MP(int a)
{
	cout << a<<" ";
}

void MyPrint(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		//it是迭代器变量 v.begin也是迭代器（类似指针）
	{
		cout << *it<<endl;
	}

	for_each(v.begin(), v.end(), MP);//for_each遍历算法
	cout << endl;

}



//int main()
//{
//	std::vector<int> v;//默认无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);//循环赋值
//	}
//	/*MyPrint(v);*/
//
//	//vector<int> v2(v.begin(), v.end());//含参构造 迭代器构造
//
//	//MyPrint(v2);
//
//	//vector<int> v3(v2);//拷贝构造
//	//MyPrint(v3);
//
//	//vector<int> v4(10, 3);//初始化构造
//	//MyPrint(v4);
//	//return 0;
//
//	//vector<int> v1 = v;//等号重载赋值
//	//MyPrint(v1);
//
//	//vector<int> v2;
//	//v2.assign(v1.begin() + 1, v1.end());//迭代器赋值
//	//MyPrint(v2);
//
//	//v2.assign(11, 11);
//	//MyPrint(v2);
//
//	if (!v.empty())//是空的返回真
//	{
//		cout << v.capacity()<<endl;
//		cout << v.size() << endl;
//	}
//
//	v.resize(15,100);//重新指定size长度,多的用默认值代替
//	MyPrint(v);
//
//	v.resize(5);
//	MyPrint(v);
//
//	
//}


//int main()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	MyPrint(v1);
//	v1.insert(v1.begin(), 100);//在迭代器指向的位置插入数字
//	MyPrint(v1);
//	v1.insert(v1.begin(), 2, 100);
//	MyPrint(v1);
//	v1.erase(v1.begin());//删除迭代器指向位置的数据MyPrint(v1);
//	MyPrint(v1);
//	v1.erase(v1.begin(), v1.end() - 1);
//	MyPrint(v1);
//	v1.clear();
//	MyPrint(v1);
//
//	return 0;
//}

//int main()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	MyPrint(v1);
//
//	vector<int> v2;
//	for (int i = 10; i >0; i--)
//	{
//		v2.push_back(i);
//	}
//	MyPrint(v2);
//
//	v1.swap(v2);//容器互换
//	MyPrint(v1);
//	return 0;
//}

//int main()
//{
//	vector<int> v;
//	v.reserve(100000);
//	int count = 0;
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])//vector容器在扩容时会重新找一块内存空间，所以首地址是不断发生变化的，所以不相等一次，就是进行了一次内存扩容；
//		{
//			count++;
//			p = &v[0];
//		}
//	}
//	cout << count;
//	return 0;
//}

void MyPrintDeque(const deque<int>& d1)
{
	for (deque<int>::const_iterator it = d1.begin(); it != d1.end(); it++)
	{
		cout << *it << " ";
	}
}

//int main()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	MyPrintDeque(d1);
//
//	deque<int>d2(d1);
//	MyPrintDeque(d2);
//
//	deque<int>d3 = d1;
//	MyPrintDeque(d3);
//
//	deque<int>d4(4, 100);
//	MyPrintDeque(d4);
//
//	deque<int> d5(d1.begin() + 2, d1.end());
//	MyPrintDeque(d5);
//
//
//	cout<<d5.size();
//	return 0;
//}


//int main()
//{
//	vector<int> v1;
//	int count = 0;
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//
//		v1.push_back(i);
//		if (p != &v1[0])//vercor每次增容会找另一块更大的空间，将原先的元素复制到新空间
//		{
//			count++;
//			p = &v1[0];//让p一直维护v1
//		}
//	}
//	cout << v1.capacity();
//	cout << v1.size();
//
//	v1.resize(3);
//	vector<int>(v1).swap(v1);//创建一个匿名对象 通过构造函数赋值  再交换 可以达到缩小capacity的作用
//	cout << v1.capacity();
//	cout << v1.size();
//
//
//	return 0;
//}

int main()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(9);
	d.push_back(8);
	d.push_back(11);
	d.push_back(12);
	sort(d.begin(), d.end());
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	return 0;
}