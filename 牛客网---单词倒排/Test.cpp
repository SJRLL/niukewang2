//��Ŀ����
//���ַ����е����е��ʽ��е��š�
//˵����
//1��ÿ����������26����д��СдӢ����ĸ���ɣ�
//2���ǹ��ɵ��ʵ��ַ�����Ϊ���ʼ������
//3��Ҫ���ź�ĵ��ʼ������һ���ո��ʾ�����ԭ�ַ��������ڵ��ʼ��ж�������ʱ������ת����Ҳֻ�������һ���ո�������
//4��ÿ�������20����ĸ��
//
//�������� :
//����һ���Կո����ָ��ľ���
//
//������� :
//������ӵ�����
//
//ʾ��1
//����
//I am a student
//
//���
//student a am I


#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s))
	{
		//���ַ���������һ���ո񣬱��ڽ��ж��ַ����������ж�(��ƽʱ��дmatlab�л�õ����������ԣ������������ͨ�ģ�����)
		vector<string> res;
		string s_temp;
		for (int i = 0; i <s.size(); i++)
		{
			if (s[i] >= 'a'&&s[i] <= 'z' || s[i] >= 'A'&&s[i] <= 'Z')
			{
				s_temp += s[i];
				if ((s[i + 1]< 'A') || (s[i + 1] >'Z'&&s[i + 1] <'a') || (s[i + 1] >'z'))
				{
					res.push_back(s_temp);
					s_temp.clear();
				}
			}
		}
		for (int i = res.size() - 1; i >= 0; i--)
		{
			cout << res[i] << " ";
		}
		cout<< endl;
	}
	system("pause");
	return 0;
}
