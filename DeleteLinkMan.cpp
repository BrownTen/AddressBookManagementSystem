#include "ABMS.h"

int deleteLinkMan(AddressBook *addressBook){
    string name;
    cout << "请输入需要删除的联系人姓名:";
    cin >> name;
    int local = isExistLinkMan(addressBook, name); // 找到需要删除的联系人的数组下标
    if (local) {    // 找到为i+1，未找到为0
        for (int i = local-1; i < addressBook->linkManNumber; ++i) {  // 逻辑上删除，将数组后面的内容前移
            addressBook->linkManArray[i] = addressBook->linkManArray[i+1];  // 数组中后一个数据覆盖前一个数据
        }
        addressBook->linkManNumber--;   // 删除成功，联系人数量减一
        cout << "删除成功\n请按任意键继续..." << endl;
        system("read");
        return 1;   // 删除成功，返回1
    } else {
        cout << "查无此人\n请按任意键继续..." << endl;
        system("read");
        return 0;   // 删除失败，返回0
    }
}