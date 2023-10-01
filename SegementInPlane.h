#pragma once
#include <iostream>
#include <random>
#include <cmath>

class ObjectMass
{
private:
	int* massiv;
	int len;


private:
	int randomNumber() {
		std::random_device rd;
		std::mt19937 gen(rd());
		// ������� �������������
		std::uniform_int_distribution<int> distribution(1, 100);
		// ���������� ��������� ����� � �������� ���������
		int randomNum = distribution(gen);
		return randomNum;
	}
	void swap(int& a, int& b) {
		int temp = a;
		a = b;
		b = temp;
	}

	int partition(int* arr, int low, int high) {
		int pivot = arr[high]; // ������� �������
		int i = low - 1; // ������ �������� ��������

		for (int j = low; j < high; j++) {
			if (arr[j] < pivot) {
				i++;
				swap(arr[i], arr[j]);
			}
		}

		swap(arr[i + 1], arr[high]);
		return i + 1;
	}

	// �������� ������� ������� ���������� ��� ������� ����������
	void quickSort(int* arr, int low, int high) {
		if (low < high) {
			// ������ �������� �������� ����� ����������
			int pivotIndex = partition(arr, low, high);

			// ���������� ��������� �������� �� � ����� �������� ��������
			quickSort(arr, low, pivotIndex - 1);
			quickSort(arr, pivotIndex + 1, high);
		}
	}

public:
	ObjectMass(){

	}

	ObjectMass(int* massiv) : massiv(massiv){
		
	}

	int getLen() {
		return len;
	}

	int* getArray(){
		return massiv;
	}

	void createMassiv(int size) {
		massiv = new int[size];
		for (int i = 0; size > i; i++) {
			massiv[i] = randomNumber();
		}
		len = size;
	}

	void updateMassiv(int object) {
		int newLen = getLen();
		int* newMass = new int[newLen + 1];
		for (int i = 0; i < newLen; i++) {
			newMass[i] = massiv[i];
		}
		newMass[newLen] = object;
		len = newLen + 1; 
		delete[] massiv; 
		massiv = newMass;
	}

	void deleteByNum(int number){
		if (number >= 0 && number < len) {
			for (int i = number; i < len - 1; i++) {
				massiv[i] = massiv[i + 1];
			}
			len--;
		}
	}

	void deleteByEl(int element) {
		for (int i = 0; i < len; i++) {
			if (massiv[i] == element) {
				deleteByNum(i);
				return ;
			}
		}
	}


	void sortedMass() {
		quickSort(massiv, 0, len - 1);
	}

};

