#include <iostream>
using namespace std;

/* 1st task
int main()
{
	int n, m;
	int sumDivs = 0;
	int countPrime = 0;
	bool isPrime = true;
	cin >> n >> m;
	while (n++ <= m) {
		sumDivs = 0;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sumDivs += i;
			}
		}
		isPrime = true;
		for (int j = 2; j <= sumDivs / 2; j++)
		{
			if (sumDivs % j == 0)
			{
				isPrime = false;
			}
		}

		if (isPrime && sumDivs != 1)
		{
			countPrime++;
		}

	}

	cout << countPrime << endl;
    return 0;
}

*/


/* 2nd task
int main()
{
	int matrix[4][4] = { {1,2,3,4} , {5,6,7,8} , {9,10,11,12}, {13,14,15,16} };
	int maxSumRows = 0;
	int maxSumColumns = 0;
	int sumRow = 0;
	int sumColumn = 0;

	for (int i = 0; i < 4; i++)
	{
		sumRow = 0;
		sumColumn = 0;
		for (int j = 0; j < 4; j++)
		{
			sumRow += matrix[i][j];
			sumColumn += matrix[j][i];
		}
		if (sumRow > maxSumRows)
		{
			maxSumRows = sumRow;
		}
		if (sumColumn > maxSumColumns)
		{
			maxSumColumns = sumColumn;
		}
	}


	cout << "Biggest sum from rows " << maxSumRows << endl;
	cout << "Biggest sum from columns " << maxSumColumns << endl;

	if (maxSumRows > maxSumColumns)
	{
		cout << "Maximum sum from rows are > then maximum sum from columns" << endl;
	}
	else if (maxSumRows < maxSumColumns)
	{
		cout << "Maximum sum from rows are < then maximum sum from columns" << endl;
	}
	else
	{
		cout << "Maximum sum from rows are = with maximum sum from columns" << endl;
	}
	return 0;
}
*/


/* 3rd task
const int MAX_SIZE = 100;
int main()
{
	int firstArray[MAX_SIZE], secondArray[MAX_SIZE];
	int firstArraySize, secondArraySize;
	cin >> firstArraySize;
	for (int i = 0; i < firstArraySize; i++)
	{
		cin >> firstArray[i];
	}

	cin >> secondArraySize;

	for (int j = 0; j < secondArraySize; j++)
	{
		cin >> secondArray[j];
	}

	bool areNumbersPresent = true;

	for (int i = 0; i < firstArraySize && areNumbersPresent; i++)
	{
		areNumbersPresent = false;
		for (int j = 0; j < secondArraySize; j++)
		{
			if (firstArray[i] == secondArray[j])
			{
				areNumbersPresent = true;
			}
		}
	}

	if (areNumbersPresent)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}

*/


/* 4th task
int main()
{
	int array[] = { 1,3,2,4,3,7 };
	int arraySize = 6;
	bool isConditionRight = true;

	for (int i = 0; i < arraySize - 1 && isConditionRight; i++)
	{
		if ((i % 2 == 0 && array[i] >= array[i + 1]) || (i % 2 != 0 && array[i] <= array[i + 1]))
		{
			isConditionRight = false;
		}
	}

	if (isConditionRight)
	{
		cout << "Condition is Right" << endl;
	}
	else
	{
		cout << "Condition is false" << endl;
	}

	return 0;
}

*/


/* 5th task

const int MAX_SIZE = 100;
int main()
{
	int matrix[MAX_SIZE][MAX_SIZE];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	bool isSymmetrical = true;

	for (int i = 0; i < n && isSymmetrical; i++)
	{
		for (int j = 0; j < n && isSymmetrical; j++)
		{
			if (matrix[i][j] != matrix[j][i])
			{
				isSymmetrical = false;
			}
		}
	}

	if (isSymmetrical)
	{
		cout << "Yes." << endl;
	}
	else
	{
		cout << "No." << endl;
	}
}

*/


/* 6th task
const int MAX_SIZE = 100;
int main()
{
	int matrix[MAX_SIZE][MAX_SIZE];
	unsigned int rowsSize, columnsSize;
	cin >> rowsSize >> columnsSize;

	for (int i = 0; i < rowsSize; i++)
	{
		for (int j = 0; j < columnsSize; j++)
		{
			cin >> matrix[i][j];
		}
	}

	int number;
	cin >> number;
	int saveRowIndexOfNumber = -1;
	int saveColumnIndexOfNumber = -1;

	for (int i = 0; i < rowsSize; i++)
	{
		for (int j = 0; j < columnsSize; j++)
		{
			if (matrix[i][j] == number)
			{
				saveRowIndexOfNumber = i;
				saveColumnIndexOfNumber = j;
			}
		}
	}

	if (saveRowIndexOfNumber != -1)
	{
		int countNeighbours = 0;
		if ((0 <= saveRowIndexOfNumber -1) && (saveRowIndexOfNumber - 1 < rowsSize) &&
			(0 <= saveColumnIndexOfNumber - 1) && (saveColumnIndexOfNumber - 1 < columnsSize))
		{
			countNeighbours++;
		}

		if ((0 <= saveRowIndexOfNumber - 1) && (saveRowIndexOfNumber - 1 < rowsSize ) &&
			(0 <= saveColumnIndexOfNumber + 1) && (saveColumnIndexOfNumber + 1 < columnsSize))
		{
			countNeighbours++;
		}

		if ((0 <= saveRowIndexOfNumber + 1) && (saveRowIndexOfNumber + 1 < rowsSize) &&
			(0 <= saveColumnIndexOfNumber - 1) && (saveColumnIndexOfNumber - 1 < columnsSize))
		{
			countNeighbours++;
		}

		if ((0 <= saveRowIndexOfNumber + 1) && (saveRowIndexOfNumber + 1 < rowsSize) &&
			(0 <= saveColumnIndexOfNumber + 1) && (saveColumnIndexOfNumber + 1 < columnsSize))
		{
			countNeighbours++;
		}

		if ((0 <= saveRowIndexOfNumber + 1) && (saveRowIndexOfNumber + 1 < rowsSize) &&
			(0 <= saveColumnIndexOfNumber) && (saveColumnIndexOfNumber < columnsSize))
		{
			countNeighbours++;
		}
		if ((0 <= saveRowIndexOfNumber - 1) && (saveRowIndexOfNumber - 1 < rowsSize) &&
			(0 <= saveColumnIndexOfNumber) && (saveColumnIndexOfNumber < columnsSize))
		{
			countNeighbours++;
		}
		if ((0 <= saveRowIndexOfNumber) && (saveRowIndexOfNumber < rowsSize) &&
			(0 <= saveColumnIndexOfNumber + 1) && (saveColumnIndexOfNumber + 1 < columnsSize))
		{
			countNeighbours++;
		}
		if ((0 <= saveRowIndexOfNumber) && (saveRowIndexOfNumber < rowsSize) &&
			(0 <= saveColumnIndexOfNumber - 1) && (saveColumnIndexOfNumber - 1 < columnsSize))
		{
			countNeighbours++;
		}

		cout << "Count of neighbours " << countNeighbours << endl;

	}
	else
	{
		cout << "ERROR!" << endl;
	}

	return 0;
}

*/