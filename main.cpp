#include<iostream>
using namespace std;
int main()
{
	// Matrix Calculator App
	int options;
	int select;
	
// 	Select Matrix Operation
	cout << " Press 1 for Addition of Matrix \n";
	cout << " Press 2 for Subtraction of Matrix \n";
	cout << " Press 3 for Multiplication of Matrix \n";
	cout << " Press 4 for Scalar Multiplication of Matrix \n";
	cout << " Press 5 for Transpose of a matrix \n";
	cout << " Press 6 for Number of elements in a Matrix \n";
	cin >> select ;
	switch (select)
	{
	case 1:
	{
		cout << " You Have Selected Addition Of Matrices Method \n";
		cout << " Please Select Row & Columns to Perform Task \n";
		cout << "\n Press 1 for 2*2 matrix \n";
		cout << " Press 2 for 2*3 matrix \n";
		cout << " Press 3 for 3*2 matrix \n";
		cout << " Press 4 for 3*3 matrix \n";
		cin >> select;
		
// 		Operation Perform
		switch (select)
		{
		case 1:
		{
			cout << " 2*2 matrix \n";
			int matrix1[2][2], matrix2[2][2], i, j, matrix3[2][2];
			cout << " Enter Elements of First Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix1[i][j];
			}
			cout << " Enter Elements of Second Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix2[i][j];
			}
			cout << " First Matrix Rows and Columns Here ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Second Matrix Rows and Columns Here ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix2[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			}
			cout << "Result of Two Given Matrix Addition is ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 2:
		{
			cout << " 2*3 matrix \n";
			int matrix1[2][3], matrix2[2][3], i, j, matrix3[2][3];
			cout << "Enter First Matrix Rows and Columns ==> \n";
			for (i = 0; i < 2; i++);
			{
				for (j = 0; j < 3; j++);
					cin >> matrix1[i][j];
			}
			cout << "  Enter Second Matrix Rows & Columns ==> \n";
			for (i = 0; i < 2; i++);
			{
				for (j = 0; j < 3; j++)
					cin >> matrix2[i][j];
			}
			cout << " First Matrix ==> \n";
			for (i = 0; i < 2; i++);
			{
				for (j = 0; j < 3; j++);
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Second Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix2[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			}
			cout << " Result of Two Given Matrix Addition is Here ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 3:
		{
			cout << " 3*2 matrix \n";
			int matrix1[3][2], matrix2[3][2], i, j, matrix3[3][2];
			cout << " Enter Rows and Columns of First Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix1[i][j];
			}
			cout << " Enter Rows and Columns of Second Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix2[i][j];
			}
			cout << " First Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Second Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix2[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			}
			cout << " Result of Two Given Matrix Addition is ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 4:
		{
			cout << " 3*3 matrix \n";
			int matrix1[3][3], matrix2[3][3], i, j, matrix3[3][3];
			cout << " Enter  Rows and Columns of First Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix1[i][j];
			}
			cout << " Enter Rows and Columns of Second Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix2[i][j];
			}
			cout << " First Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Second Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix2[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
			}
			cout << " Result of Two Given Matrix Addition is  ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
		}
		break;
		}
		break;
	}
	case 2:
	{
		cout << " You Have Selected Subtraction of Matrix Method \n";
		cout << "\n Please Select Row & Columns to Perform Task \n";
		cout << " Press 1 for 2*2 matrix \n";
		cout << " Press 2 for 2*3 matrix \n";
		cout << " Press 3 for 3*2 matrix \n";
		cout << " Press 4 for 3*3 matrix \n";
		cin >> select;
		switch (select)
		{
		case 1:
		{
			cout << " 2*2 matrix \n";
			int matrix1[2][2], matrix2[2][2], i, j, matrix3[2][2];
			cout << " Enter Rows and Columns of First Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix1[i][j];
			}
			cout << " Enter Rows and Columns of Second Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix2[i][j];
			}
			cout << " First Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Second Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix2[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
			}
			cout << " Result of Two Given Matrix Subtraction  is ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 2:
		{
			cout << " 2*3 matrix \n";
			int matrix1[2][3], matrix2[2][3], i, j, matrix3[2][3];
			cout << " Enter Rows and Columns of First Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix1[i][j];
			}
			cout << " Enter Rows and Columns of Second Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix2[i][j];
			}
			cout << " First Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Second Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix2[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
			}
			cout << " Result of Two Given Matrix Subtraction is ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 3:
		{
			cout << " 3*2 matrix \n";
			int matrix1[3][2], matrix2[3][2], i, j, matrix3[3][2];
			cout << " Enter Rows and Columns of First Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix1[i][j];
			}
			cout << " Enter Rows and Columns of Second Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix2[i][j];
			}
			cout << " First Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Second Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix2[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
			}
			cout << " Result of Two Given Matrix Subtraction is ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 4:
		{
			cout << " 3*3 matrix \n";
			int matrix1[3][3], matrix2[3][3], i, j, matrix3[3][3];
			cout << " Enter Rows and Columns of First Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix1[i][j];
			}
			cout << " Enter Rows and Columns of Second Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix2[i][j];
			}
			cout << " First Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Second Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix2[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
			}
			cout << " Result of Two Given Matrix Subtraction is ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
		}
		break;
		}
		break;
	}
	case 3:
	{
		cout << "You Have Selected Multiplication Method of Matrix Calculator \n";
		cout << "\n Please Select Row & Columns to Perform Task \n";
		cout << " Press 1 for 2*2 matrix \n";
		cout << " Press 2 for 2*3 matrix \n";
		cout << " Press 3 for 3*2 matrix \n";
		cout << " Press 4 for 3*3 matrix \n";
		cin >> select;
		switch (select)
		{
		case 1:
		{
			cout << " 2*2 matrix \n";
			int matrix1[2][2], matrix2[2][2], i, j, matrix3[2][2];
			cout << " Enter Row & Columns of First Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix1[i][j];
			}
			cout << " Enter Row & Columns of Second Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix2[i][j];
			}
			cout << " First Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Second Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix2[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
			}
			cout << " Result of Two Given Matrix Multiplication is ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 2:
		{
			cout << " 2*3 matrix \n";
			int matrix1[2][3], matrix2[2][3], i, j, matrix3[2][3];
			cout << " Enter Rows and Columns of First Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix1[i][j];
			}
			cout << " Enter Rows and Columns of Second Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix2[i][j];
			}
			cout << " First Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Second Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix2[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
			}
			cout << " Result of Two Given Matrix Multiplication is ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 3:
		{
			cout << " 3*2 matrix \n";
			int matrix1[3][2], matrix2[3][2], i, j, matrix3[3][2];
			cout << " Enter Rows and Columns of First Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix1[i][j];
			}
			cout << " Enter Rows and Columns of Second Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix2[i][j];
			}
			cout << " First Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Second Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix2[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
			}
			cout << " Result of Two Given Matrix Multiplication is ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 4:
		{
			cout << " 3*3 matrix \n";
			int matrix1[3][3], matrix2[3][3], i, j, matrix3[3][3];
			cout << " Enter Rows & Columns of First Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix1[i][j];
			}
			cout << " Enter Rows & Columns of Second Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix2[i][j];
			}
			cout << " First Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Second Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix2[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
			}
			cout << " Result of Two Given Matrix Multiplication is ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
		}
		break;
		}
		break;
	}
	case 4:
	{
		cout << " You Have Selected Scalar Multiplication Method of Matrix Calculator \n";
		cout << "\n Please Select Row & Columns to Perform Task \n";
		cout << " Press 1 for 2*2 matrix \n";
		cout << " Press 2 for 2*3 matrix \n";
		cout << " Press 3 for 3*2 matrix \n";
		cout << " Press 4 for 3*3 matrix \n";
		cin >> select;
		switch (select)
		{
		case 1:
		{
			cout << " 2*2 matrix \n";
			int matrix1[2][2], i, j, matrix3[2][2], number;
			cout << " Enter Rows & Columns of Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix1[i][j];
			}
			cout << " Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Enter Scalar Value to multiply \n";
			cin >> number;
			cout << " Calculator is performing the task or multiplying the " << number << " with the Matrix \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					matrix3[i][j] = matrix1[i][j] * number;
			}
			cout << "\n Result of Multiplication of Scalar Matrixes is ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 2:
		{
			cout << " 2*3 matrix \n";
			int matrix1[2][3], i, j, matrix3[2][3], number;
			cout << " Enter Rows & Columns of Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix1[i][j];
			}
			cout << " Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Enter Scalar Value to multiply \n";
			cin >> number;
			cout << " Calculator is performing the task or multiplying " << number << " with the Matrix \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					matrix3[i][j] = matrix1[i][j] * number;
			}
			cout << "\n Result of Multilpication of scalar Matrix is ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 3:
		{
			cout << " 3*2 matrix \n";
			int matrix1[3][2], i, j, matrix3[3][2], number;
			cout << " Enter Rows & Columns of Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix1[i][j];
			}
			cout << " Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Enter Scalar Value to multiply \n";
			cin >> number;
			cout << " Calculator is performing the task or multiplying  " << number << " with the Matrix \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					matrix3[i][j] = matrix1[i][j] * number;
			}
			cout << "\n Result of Multilpication of scalar Matrix is ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 4:
		{
			cout << " 3*3 matrix \n";
			int matrix1[3][3], i, j, matrix3[3][3], number;
			cout << " Enter Rows & Columns of Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix1[i][j];
			}
			cout << " Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			cout << " Enter Scalar Value to multiply \n";
			cin >> number;
			cout << " Calculator is performing the task or multiplying " << number << " with the Matrix \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					matrix3[i][j] = matrix1[i][j] * number;
			}
			cout << "\n Result of Multilpication of scalar Matrix is ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
		}
		break;
		}
		break;
	}
	case 5:
	{
		cout << " You Have Selected Transpose Method of Matrix Calculator \n";
		cout << "\n Enter Rows & Columns to perform Task \n";
		cout << " Press 1 for 2*2 matrix \n";
		cout << " Press 2 for 2*3 matrix \n";
		cout << " Press 3 for 3*2 matrix \n";
		cout << " Press 4 for 3*3 matrix \n";
		cin >> select;
		switch (select)
		{
		case 1:
		{
			cout << " 2*2 matrix \n";
			int matrix1[2][2], i, j, matrix3[2][2];
			cout << " Enter Rows & Columns of Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix1[i][j];
			}
			cout << " Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					matrix3[j][i] = matrix1[i][j];
			}
			cout << "\n Transposed Matrix is ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 2:
		{
			cout << " 2*3 matrix \n";
			int matrix1[2][3], i, j, matrix3[2][3];
			cout << " Enter Rows & Columns of Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix1[i][j];
			}
			cout << " Matrix ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					matrix3[j][i] = matrix1[i][j];
			}
			cout << "\n Transposed Matrix is ==> \n";
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 3:
		{
			cout << " 3*2 matrix \n";
			int matrix1[3][2], i, j, matrix3[3][2];
			cout << " Enter Rows & Columns of Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cin >> matrix1[i][j];
			}
			cout << " Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					matrix3[j][i] = matrix1[i][j];
			}
			cout << "\n Transposed Matrix is ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
			break;
		}
		case 4:
		{
			cout << " 3*3 matrix \n";
			int matrix1[3][3], i, j, matrix3[3][3];
			cout << " Enter Rows & Columns of Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cin >> matrix1[i][j];
			}
			cout << " Matrix ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					matrix3[j][i] = matrix1[i][j];
			}
			cout << "\n Transposed Matrix is ==> \n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix3[i][j] << " ";
				cout << endl;
			}
		}
		break;
		}
		break;
	}
	case 6:
	{
		cout << " You Have Selected Elements Counter Method of Matrix Calculator \n";
		cout << "\n Enter Rows & Columns to Perform Task \n";
		cout << " Press 1 for 2*2 matrix \n";
		cout << " Press 2 for 2*3 matrix \n";
		cout << " Press 3 for 3*2 matrix \n";
		cout << " Press 4 for 3*3 matrix \n";
		cin >> select;
		switch (select)
		{
		case 1:
		{
			cout << " 2*2 matrix \n";
			int matrix1[2][2] =
			{ 1,2,
			3,4 }, i, j, count = 0;
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
				{
					if (matrix1[i][j] != '\0');
					count++;
				}
			}
			cout << " Elements in the matrix are ==> " << count << "\n";
			break;
		}
		case 2:
		{
			cout << " 2*3 matrix \n";
			int matrix1[2][3] =
			{ 1,2,3,
			4,5,6, }, i, j, count = 0;
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 3; j++)
				{
					if (matrix1[i][j] != '\0');
					count++;
				}
			}
			cout << " Elements in the matrix are ==> " << count << "\n";
			break;
		}
		case 3:
		{
			cout << " 3*2 matrix \n";
			int matrix1[3][2] =
			{ 1,2,
			4,5,
			6,7 }, i, j, count = 0;
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 2; j++)
				{
					if (matrix1[i][j] != '\0');
					count++;
				}
			}
			cout << " Elements in the matrix are ==> " << count << "\n";
			break;
		}
		case 4:
		{
			cout << " 3*3 matrix \n";
			int matrix1[3][3] =
			{ 1,2,3,
			4,5,6,
			7,8,9 }, i, j, count = 0;
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					cout << "  " << matrix1[i][j] << " ";
				cout << endl;
			}
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
				{
					if (matrix1[i][j] != '\0');
					count++;
				}
			}
			cout << " Elements in the matrix are ==> " << count << "\n";
		}
		break;
		}
		break;
	}
	}
}
