#include <iostream>
#include <vector>
#include "VecOper.h"
using namespace std;
//У контейнері типу vector зберігається набір цілих чисел.
//Створіть функтори для вирішення наступних завдань :
//■ Пошук мінімального значення;
//■ Пошук максимального значення;
//■ Сортування даних за спаданням;
//■ Сортування даних за зростанням;
//■ Збільшення значень в контейнері на задану константу;
//■ Зменшення значень в контейнері на задану константу;
//■ Видалення елементів з контейнера які рівні шуканому;
//значенню.
//Не забувайте використовувати алгоритми там, де це
//необхідно.

int main()
{
	vector<int> myVector = { 5,15,25,10,0,30,20,35,5,10 };
	VecOper operation;

//■ Пошук мінімального значення;
	cout<<" Min in arr: "<< operation.minInArr(myVector)<<endl;
//■ Пошук максимального значення;
	cout << " Max in arr: " << operation.maxInArr(myVector) << endl;
//■ Сортування даних за спаданням;
	operation.sortDescending(myVector);
	operation.showArr(myVector);
//■ Сортування даних за зростанням;
	operation.sortAscending(myVector);
	operation.showArr(myVector);
//■ Збільшення значень в контейнері на задану константу;
	operation.addToEvery(myVector, 1);
	operation.showArr(myVector);
//■ Зменшення значень в контейнері на задану константу;
	operation.takeFromEvery(myVector, 2);
	operation.showArr(myVector);
//■ Видалення елементів з контейнера які рівні шуканому;
	operation.deleteIfIn(myVector, 28); // хардкод))) такого нет в массиве
	operation.showArr(myVector);
	operation.deleteIfIn(myVector, 9); // хардкод))) а эти есть
	operation.deleteIfIn(myVector, 4); // хардкод)))
	operation.showArr(myVector);
	return 0;
}