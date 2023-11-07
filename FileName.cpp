#include<iostream>
using namespace std;
class father {
public:
	virtual void transform()=0;
	virtual void ability()=0;
	virtual ~father()//子类的内存全都释放
	{

	}
};
class sheep:public father {
public:
	void transform() {
		cout << "山羊的人形态" << endl;
	}
	void ability() {
		cout << "脚变手" << endl;
	}
};
class lion :public father {
public:
	void transform() {
		cout << "狮子的人形态" << endl;
	}
	void ability() {
		cout << "喷火" << endl;
	}
};
//定义工厂类
enum class Type:char{sheep,lion};//枚举
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
