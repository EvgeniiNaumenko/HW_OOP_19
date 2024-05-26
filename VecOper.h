#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class VecOper
{
public:
	//■ Пошук мінімального значення;
	int minInArr(const vector<int>&);
	//■ Пошук максимального значення
	int maxInArr(const vector<int>&);
	//■ Сортування даних за спаданням;
	void sortDescending(vector<int>&);
	//■ Сортування даних за зростанням;
	void sortAscending(vector<int>&);
	//■ Збільшення значень в контейнері на задану константу;
	void addToEvery(vector<int>&, int);
	//■ Зменшення значень в контейнері на задану константу;
	void takeFromEvery(vector<int>&, int);
	//■ Видалення елементів з контейнера які рівні шуканому;
	void deleteIfIn(vector<int>&, int);
	//показуха
	void showArr(vector<int>&);
};

