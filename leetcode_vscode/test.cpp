#include <iostream>
using namespace std;
#include <cstring>

//����ĳ�ʼ��������

class Person {
public:
    // 1�����캯��
    //û�з���ֵ������лvoid
    //��������������ͬ
    //���캯�������в��������Է�������
    //���������ʱ�򣬹��캯�����Զ����ã�����ֻ����һ��
    Person() {
        cout << "Preson ���캯����ʹ��" << endl;
    }
    // 2���������� ���������Ĳ���
    //û�з���ֵ����дvoid
    //��������������ͬ ������ǰ��~
    //���������������в����ģ����Բ����Է�������
    //����������ǰ�����Զ�������������������ֻ�����һ��
    ~Person() {
        cout << "Person �����������ĵ���" << endl;
    }
};

//������������Ǳ����е�ʵ�֣���������Լ����ṩ�����������ṩһ����ʵ�ֵĹ��������
void test01() {
    Person person; //��ջ�ϵ����ݣ�test01ִ����Ϻ󣬾ͻ��Զ��ͷ�
}
int main() {
    test01(); //�����������ᱻ����

    Person p; //����ʱֻ����ù��캯����Ҳ�����䵽��һ��û�еõ��ͷţ�
              //ֻ��main()ִ����ͻ�ִ����������

    system("pause");

    return 0;
}