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
		//it�ǵ��������� v.beginҲ�ǵ�����������ָ�룩
	{
		cout << *it<<endl;
	}

	for_each(v.begin(), v.end(), MP);//for_each�����㷨
	cout << endl;

}



//int main()
//{
//	std::vector<int> v;//Ĭ���޲ι���
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);//ѭ����ֵ
//	}
//	/*MyPrint(v);*/
//
//	//vector<int> v2(v.begin(), v.end());//���ι��� ����������
//
//	//MyPrint(v2);
//
//	//vector<int> v3(v2);//��������
//	//MyPrint(v3);
//
//	//vector<int> v4(10, 3);//��ʼ������
//	//MyPrint(v4);
//	//return 0;
//
//	//vector<int> v1 = v;//�Ⱥ����ظ�ֵ
//	//MyPrint(v1);
//
//	//vector<int> v2;
//	//v2.assign(v1.begin() + 1, v1.end());//��������ֵ
//	//MyPrint(v2);
//
//	//v2.assign(11, 11);
//	//MyPrint(v2);
//
//	if (!v.empty())//�ǿյķ�����
//	{
//		cout << v.capacity()<<endl;
//		cout << v.size() << endl;
//	}
//
//	v.resize(15,100);//����ָ��size����,�����Ĭ��ֵ����
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
//	v1.insert(v1.begin(), 100);//�ڵ�����ָ���λ�ò�������
//	MyPrint(v1);
//	v1.insert(v1.begin(), 2, 100);
//	MyPrint(v1);
//	v1.erase(v1.begin());//ɾ��������ָ��λ�õ�����MyPrint(v1);
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
//	v1.swap(v2);//��������
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
//		if (p != &v[0])//vector����������ʱ��������һ���ڴ�ռ䣬�����׵�ַ�ǲ��Ϸ����仯�ģ����Բ����һ�Σ����ǽ�����һ���ڴ����ݣ�
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
//		if (p != &v1[0])//vercorÿ�����ݻ�����һ�����Ŀռ䣬��ԭ�ȵ�Ԫ�ظ��Ƶ��¿ռ�
//		{
//			count++;
//			p = &v1[0];//��pһֱά��v1
//		}
//	}
//	cout << v1.capacity();
//	cout << v1.size();
//
//	v1.resize(3);
//	vector<int>(v1).swap(v1);//����һ���������� ͨ�����캯����ֵ  �ٽ��� ���Դﵽ��Сcapacity������
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