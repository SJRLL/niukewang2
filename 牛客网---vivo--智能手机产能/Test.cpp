��vivo�����ϣ�ÿλְ�����Ŷ��ֻ��ӹ�������ʶ����Ϥ�;�������ӣ��ղ���Ҳ�᲻��������
�����һ������1̨��������2��(���ڶ�������)ÿ������2����������3��(�����ġ��塢����)ÿ������3�� ... ...
�Դ����ƣ����̼������n���ܹ������������ֻ�������

����
11
���
35
˵��
��11�칤���ܹ������������ֻ�����

class Solution {
public:
	/**
	*
	* @param n int���� ��n��
	* @return int����
	*/
	int solution(int n) {
		// write code here
		int i = 0, sum = 0, sumday = 0;
		while (sumday<n)
		{
			i++;
			sumday += i;
		}
		int p = i;
		while (i>0)
		{
			sum += i*i;
			i--;
		}

		sum -= (sumday - n)*p;
		return sum;
	}
};