����һ������ΪN(N>1)����������A�����Խ�A���ֳ������������֣��󲿷�A[0..K]���Ҳ���A[K + 1..N - 1]��
K����ȡֵ�ķ�Χ��[0, N - 2]������ô�໮�ַ����У��󲿷��е����ֵ��ȥ�Ҳ������ֵ�ľ���ֵ������Ƕ��٣�

������������A������Ĵ�Сn���뷵����Ŀ����Ĵ𰸡�

����������
[2, 7, 3, 1, 1], 5
���أ�6

class MaxGap {
public:
	int findMaxGap(vector<int> A, int n) {
		// write code here
		int max = A[0], min;
		for (int i = 0; i<n; i++)
		{		
			if (A[i]>max)
		    {
			 max = A[i];
		    }
		}			
		min = A[0]>A[n - 1] ? A[n - 1] : A[0];
		return max - min;
	}
};