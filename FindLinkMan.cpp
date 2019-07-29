#include "ABMS.h"

int findLinkMan(const AddressBook *addressBook){
    string name;
    cout << "请输入需要删除的联系人姓名:";
    cin >> name;
    int local = isExistLinkMan(addressBook, name); // 找到需要查找的联系人的数组下标
    if (local) {    // 找到为i+1，未找到为0
        cout << "\t姓名:" << addressBook->linkManArray[local-1].linkManName << endl;
        cout << "\t性别:" << (addressBook->linkManArray[local-1].linkManGender==1?"男":"女") << endl;
        cout << "\t年龄:" << addressBook->linkManArray[local-1].linkManAge << endl;
        cout << "\t电话:" << addressBook->linkManArray[local-1].linkManPhone << endl;
        cout << "\t地址:" << addressBook->linkManArray[local-1].linkManAddress << endl;
        cout << "请按任意键继续..." << endl;
        system("read");
        return 1;   // 查到此人，返回1
    } else {
        cout << "查无此人\n请按任意键继续..." << endl;
        system("read");
        return 0;   // 未查到此人，返回0
    }
}