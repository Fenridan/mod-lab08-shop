// Copyright 2021 GHA Test Team
#include "include/task.h"

using namespace std;

void test() {


	//test1 Инициализация покупки
	Shop purchase(4, 20, 600, 5, 4);

	if (purchase.buy_count == 5 && purchase.Time == 600 && purchase.count == 4 && purchase.threads.size() > 0) {
		cout << "Test1 Accepted" << endl;
	}

	//test2 моедлирования работы

	purchase.Start_working(true);
	if (purchase.buy_time > 3000 && purchase.wait_time > 5000 && purchase.work_time > 11500) {
		cout << "Test2 Accepted" << endl;
	}


	//test3 итоговых пропускных способностей многоканальной СВО с ограниченной очередью

	if (purchase.A > 0.8 && purchase.Q > 0.4) {
		cout << "Test3 Accepted" << endl;
	}

}
