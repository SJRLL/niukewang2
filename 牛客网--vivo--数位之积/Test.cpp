�ָ������������� n����Ѱ�Ҳ������С�������� m��m>9����ʹ�� m �ĸ�λ����λ��ʮλ����λ ... ...��֮�˻�����n��������������� - 1��
ʾ��1
����
36
���
49
ʾ��2
����
100
���
455

class Solution {
public:
	/**
	* ����һ��������ֵ������һ������ֵ
	* @param n int���� n>9
	* @return int����
	*/
	int solution(int n) {
		// write code here
		string s = "";
		for (int i = 9; i >= 2 && n != 1; --i)
		{
			while (n%i == 0)
			{
				s += ('0' + i);
				n = n / i;
			}
		}
		reverse(s.begin(), s.end());
		return n == 1 ? stoi(s) : -1;
	}
};