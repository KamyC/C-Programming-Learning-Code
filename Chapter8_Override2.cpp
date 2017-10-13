//#include <iostream>
//using namespace std;
//
//class Clock{
//public:
//	Clock(int hour = 0, int minute = 0, int second = 0);
//	void showTime()const{ cout << hour << ":" << minute << ":" << second << endl; };
//	Clock operator++(int);//后置单目运算符重载
//	Clock& operator++();//前置单目运算符重载
//private:
//	int hour, minute, second;
//};
//Clock::Clock(int hour,int minute,int second){
//	if (0 <= hour && hour < 24 && 0 <= minute && minute < 60
//		&& 0 <= second && second < 60) {
//		this->hour = hour;
//		this->minute = minute;
//		this->second = second;
//	}
//	else
//		cout << "Time error!" << endl;
//}
//Clock &Clock::operator++(){
//	second++;
//	if (second >= 60){
//		second -= 60;
//		minute ++;
//		if (minute >= 60){
//			minute -= 60;
//			hour = (hour + 1) % 24;
//		}
//	}
//	return *this; //返回自身
//}
//Clock Clock::operator++(int){
//	Clock old = *this;
//	++(*this);
//	return old;//返回原来的值（右值）,但这个对象已经+1过了。
//}
//int main()
//{	
//	Clock myClock(23, 59, 59);
//	
//	(myClock++).showTime();
//
//	(++myClock).showTime();
//	return 0;
//}