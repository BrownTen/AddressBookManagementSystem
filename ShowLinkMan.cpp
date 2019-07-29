#include "ABMS.h"

void showLinkMan(const AddressBook *addressBook){
    // 判断通讯录中人数是否为0,如果为0,提示记录为空,如果不为0,显示通讯录中联系人的信息
    if (addressBook->linkManNumber == 0){
        cout << "当前记录为空\n请按任意键继续..." << endl;
        system("read");
        return ;
    }
    for (int i = 0; i < addressBook->linkManNumber; ++i) {
        cout << "第" << i+1 << "个联系人信息(" << i+1 << "/" << addressBook->linkManNumber << "):" << endl;
        cout << "\t姓名:" << addressBook->linkManArray[i].linkManName << endl;
        cout << "\t性别:" << (addressBook->linkManArray[i].linkManGender==1?"男":"女") << endl;
        cout << "\t年龄:" << addressBook->linkManArray[i].linkManAge << endl;
        cout << "\t电话:" << addressBook->linkManArray[i].linkManPhone << endl;
        cout << "\t地址:" << addressBook->linkManArray[i].linkManAddress << endl;
    }
    cout << "请按任意键继续..." << endl;
    system("read");
}