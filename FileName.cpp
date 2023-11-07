#include<iostream>
using namespace std;
class father {
public:
	virtual void transform()=0;
	virtual void ability()=0;
	virtual ~father()//������ڴ�ȫ���ͷ�
	{

	}
};
class sheep:public father {
public:
	void transform() {
		cout << "ɽ�������̬" << endl;
	}
	void ability() {
		cout << "�ű���" << endl;
	}
};
class lion :public father {
public:
	void transform() {
		cout << "ʨ�ӵ�����̬" << endl;
	}
	void ability() {
		cout << "���" << endl;
	}
};
//���幤����
enum class Type:char{sheep,lion};//ö��
class factory {
public:
	father* createsmile(Type type) {
		father* ptr = nullptr;
		switch (type) {
		case Type::sheep:
			ptr=new sheep;
			break;
		case Type::lion:
			ptr=new lion;
			break;
		}
		return ptr;
	}
};
int main() {
	factory* ff = new factory;
	father* obj = ff->createsmile(Type::sheep);
	obj->transform();
	obj->ability();

}
