��һ����ά�����У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������


class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		int Rowcount = array.size();
		int Colcount = array[0].size();
		int i, j;
		for (i = Rowcount, j = 0; i >= 0 && j < Colcount)
		{
			if (target == array[i][j])
			{
				return true;
			}

			if (target < array[i][j])
			{
				i--;
				continue;
			}
			if (target>array[i][j])
			{
				j++;
				continue;
			}
		}
		return false;
	}
};