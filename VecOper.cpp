#include "VecOper.h"

int VecOper::minInArr(const vector<int>& vector)
{
	// минимальный элемент в диапазоне
	return * min_element(vector.begin(), vector.end());
}

int VecOper::maxInArr(const vector<int>& vector)
{
	//максимальный элемент в диапазоне
	return * max_element(vector.begin(), vector.end());
}

void VecOper::sortDescending(vector<int>& vector)
{
	//сорировка по возрастанию
	sort(vector.begin(), vector.end());
	//разворот)))))
	reverse(vector.begin(), vector.end());
	
}

void VecOper::sortAscending(vector<int>& vector)
{
	//сортировка по возрастанию
	sort(vector.begin(), vector.end());
	
}

void VecOper::addToEvery(vector<int>& vector, int val)
{
	//для каждого от начала до конца вектора выполнить анонимную функцию а именно значение +значение
	for_each(vector.begin(), vector.end(), [val](int& n) { n += val; });
}

void VecOper::takeFromEvery(vector<int>& vector, int val)
{
	//в обратку - значение
	for_each(vector.begin(), vector.end(), [val](int& n) { n -= val; });
}

void VecOper::deleteIfIn(vector<int>&vector, int val)
{
	//удаляем элементы от задоного начала и до конца, начало будет первый элемент перемещенный в конец конец это конец ахах
	vector.erase(remove(vector.begin(), vector.end(), val), vector.end());
}

void VecOper::showArr(vector<int>& vector)
{
	for (auto el : vector)
	{
		cout << el << " ";
	}
	cout << endl;

}
