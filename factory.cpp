#include<iostream>
using namespace std;
class father {
public:
	virtual void transform() = 0;
	virtual ~father() {};//让子类资源全部释放
};
class wheel :public father {
public:
	void transform()override {//override检查子类函数名是否与父类一致
		cout << "生产轮胎" << endl;
	}
};
class chair :public father {
public:
	void transform()override {
		cout << "生产椅子" << endl;
	}
};
class factory {
public:
	virtual father* creategoods() = 0;
	virtual ~factory() {};
};
class wheelfactory :public factory {
public:
	father* creategoods() {
		return new wheel;
	}
	~wheelfactory() {
		cout << "被析构" << endl;
	}
};
class chairfactory:public factory{
public:
	father* creategoods() {
		return new chair;
	}
	~chairfactory() {
		cout << "被析构" << endl;
	}
};
int main() {
	//factory* p = new wheelfactory;
	factory* p = new chairfactory;
	father* s = p->creategoods();
	s->transform();
	delete(p);
	delete(s);
}