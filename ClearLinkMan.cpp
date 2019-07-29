#include "ABMS.h"

int clearLinkMan(AddressBook *addressBook){
    // 危险操作，二次判断
    int selectClear;
    cout << "确认是否需要清空记录！！(确认请输入1，返回主界面输入0):";
    cin >> selectClear;
    if (selectClear){
        // 只需要将通讯录中联系人的数量置为0，完成逻辑清空即可
        addressBook->linkManNumber = 0;
        cout << "通讯录已清空\n请按任意键继续..." << endl;
        system("read");
        return 1;   // 成功清空通讯录，返回1
    }
    return 0;   //返回主界面，返回0
}
