��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡���������һ������Ϊ9������{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }��
��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��

class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int len = numbers.size();
		if (len == 0)
		{
			return 0;
		}
		sort(numbers.begin(), numbers.end());
		int mid = len / 2;
		int count = 0;
		for (int i = mid; i >= 0; --i)
		{
			if (numbers[i] == numbers[mid])
			{
				count++;
			}
			else
			{
				break;
			}
		}
		for (int j = mid + 1; j<len; ++j)
		{
			if (numbers[j] == numbers[mid])
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if (count>mid)
		{
			return numbers[mid];
		}
		else
		{
			return 0;;
		}
	}
};