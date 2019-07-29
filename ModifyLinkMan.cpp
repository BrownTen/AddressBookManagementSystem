#include "ABMS.h"

int modifyLinkMan(AddressBook *addressBook){
    string name;
    cout << "请输入需要修改的联系人姓名:";
    cin >> name;
    int local = isExistLinkMan(addressBook, name); // 找到需要修改的联系人的数组下标
    if (local) {    // 找到为i+1，未找到为0
        // 修改联系人姓名，性别，年龄，电话，地址
        string name;
        int gender = 0;
        int age = 0;
        string phone;
        string address;

        cout << "请输入联系人的修改信息（" << local << "/" << addressBook->linkManNumber << "）:" << endl;
        cout << "\t姓名:";
        cin >> name;
        addressBook->linkManArray[local-1].linkManName = name;

        while (true){
            cout << "\t性别(0为女,1为男):";
            cin >> gender;
            if (gender == 1 || gender == 0){
                addressBook->linkManArray[local-1].linkManGender = gender;
                break;
            }
            cout << "\t\t输入错误,请输入正确的内容" << endl;
        }

        cout << "\t年龄:";
        cin >> age;
        addressBook->linkManArray[local-1].linkManAge = age;

        cout << "\t电话:";
        cin >> phone;
        addressBook->linkManArray[local-1].linkManPhone = phone;

        cout << "\t地址:";
        cin >> address;
        addressBook->linkManArray[local-1].linkManAddress = address;

        cout << "修改成功！\n请按任意键继续..." << endl;
        system("read");
        return 1;   // 修改成功，返回1
    } else {
        cout << "查无此人\n请按任意键继续..." << endl;
        system("read");
        return 0;   // 修改成功，返回0
    }
}
