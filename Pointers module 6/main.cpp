#include <iostream>

//��������� � �������
template <typename T>
void my_swap(T num1, T num2) {// �� �������� ��� ��� ��������� ��� ����� ���������� (� ��� ��� ������� ���������)
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}

template <typename T>
void p_swap(T* pnum1, T* pnum2) {
	T tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
}



int main() {
	setlocale(LC_ALL, "Rus");
	int n,m;
	// ��������� �� ����������
	/*n = 10; m = 20;
	std::cout << "n = " << n << std::endl;//����� ��������� ����������
	std::cout << "&n = " << &n << std::endl; //����� ������ ����������
	int* pn = &n;//�������� ��������� ������������� �� ���������� n
	std::cout << "pn = " << pn << std::endl;
	std::cout << "" << pn << std::endl;
	std::cout << "*pn" << *pn << std::endl;// int *pn = &n;   << *pn << std:: 
	//*pn ������ ������. 
	*pn = 15; // ��������� � ���������� n ����� ������������� ��������� pn;
	std::cout << "����� n = " << n << std::endl;

	pn = &m; //��������������� ��������� �� ���������� m
	std::cout << "&m = " << &m << std::endl;
	std::cout << "pn = " << pn << std::endl;

	int* pm = &m;
	std::cout << "pm = " << pm << std::endl;
	*pm = 25;
	std::cout << "m = " << m << std::endl;
	std::cout << "*pn = " << pn << std::endl;
	std::cout << "*pm = " << pm << std::endl;*/

	//��������� � ��������
	/*const int size = 5;
	int arr[size]{ 10, 7 , 105, 88, 90 };
	int* pa2 = &arr[2];
	//int* pa2 = &arr[2];// ��� ���������� ������ ������� �������
	std::cout << "pa2 = " << *pa2 << std::endl;//105
	pa2++;
	std::cout << "pa2 = " << *pa2 << std::endl;// 88 
	pa2 -= 2; // ������ �������� �� 2 ������ ����� �� ���������� �����
	std::cout << "pa2 = " << *pa2 << std::endl;//7

	pa2 = &arr[0];
	for (int i = 0; i < size; i++)
		std::cout << *(pa2 + i) << ' ';
	std::cout << std::endl;

	std::cout << arr << std::endl; // ��� ������� - ��������� �� ��� ������ �������
	std::cout <<"pa2 = " << pa2 << std::endl;
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += *(arr + i);
	std::cout << "����� : " << sum << std::endl;
	//arr = &n; //������
	//arr++; //������
	//arr -=2; //������*/

	//��������� � �������
	n = 7; m = 15;
	std::cout << n << ' ' << m << std::endl;
	//my_swap(n, m);// �� �������� ��� ��� ��������� ��� ����� ���������� (� ��� ��� ������� ���������)
	p_swap(&n, &m);
	std::cout << n << ' ' << m << std::endl;

	return 0;
}