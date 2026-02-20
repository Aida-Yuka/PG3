#include <iostream>
#include <thread>

using namespace std;

void PrintThread(uint32_t num) {
	cout << "thread" << num << endl;
}

int main() {

	// マルチスレッドではある
	std::thread t1(PrintThread, 1);
	/*スレッドt1開始*/;
	t1.join();

	std::thread t2(PrintThread, 2);
	/*スレッドt2開始*/;
	t2.join();

	std::thread t3(PrintThread, 3);
	/*スレッドt3開始*/;
	t3.join();

	return 0;
}
