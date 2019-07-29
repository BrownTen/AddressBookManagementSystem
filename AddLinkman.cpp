#include "ABMS.h"

int addLinkMan(AddressBook *addressBook){
    // 判断通讯录是否已满，如果满了就不能再添加
    if (addressBook->linkManNumber == MAX){
        return 0;   // 添加失败，返回0
    }
    // 添加联系人姓名，性别，年龄，电话，地址
    string name;
    int gender = 0;
    int age = 0;
    string phone;
    string address;

    cout << "请输入联系人的信息（" << addressBook->linkManNumber+1 << "/" << MAX << "）:" << endl;
    cout << "\t姓名:";
    cin >> name;
    addressBook->linkManArray[addressBook->linkManNumber].linkManName = name;

    while (true){
        cout << "\t性别(0为女,1为男):";
        cin >> gender;
        if (gender == 1 || gender == 0){
            addressBook->linkManArray[addressBook->linkManNumber].linkManGender = gender;
            break;
        }
        cout << "\t\t输入错误,请输入正确的内容" << endl;
    }

    cout << "\t年龄:";
    cin >> age;
    addressBook->linkManArray[addressBook->linkManNumber].linkManAge = age;

    cout << "\t电话:";
    cin >> phone;
    addressBook->linkManArray[addressBook->linkManNumber].linkManPhone = phone;

    cout << "\t地址:";
    cin >> address;
    addressBook->linkManArray[addressBook->linkManNumber].linkManAddress = address;

    cout << "添加成功\n任意键继续..." << endl;
    system("read");
    addressBook->linkManNumber++;   // 添加成功，通讯录中联系人数量加一
    return 1;   // 添加成功，返回1
}