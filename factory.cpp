#include<iostream>
using namespace std;
class father {
public:
	virtual void transform() = 0;
	virtual ~father() {};//��������Դȫ���ͷ�
};
class wheel :public father {
public:
	void transform()override {//override������ຯ�����Ƿ��븸��һ��
		cout << "������̥" << endl;
	}
};
class chair :public father {
public:
	void transform()override {
		cout << "��������" << endl;
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
		cout << "������" << endl;
	}
};
class chairfactory:public factory{
public:
	father* creategoods() {
		return new chair;
	}
	~chairfactory() {
		cout << "������" << endl;
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