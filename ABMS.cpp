// 展示界面
#include "ABMS.h"

int main(){

    int select = 0; // 创建用户选择输入的变量

    AddressBook addressBook = init();   // 接收初始化的通讯录

    while (true){
        system("clear");

        showMenu(); // 通讯录管理首页

        cin >> select;  // 操作选项
        switch (select){
            case 0: // 退出
                cout << "欢迎下次使用\n任意键继续..." << endl;
                system("read");
                return 0;

            case 1: // 添加
                if (!addLinkMan(&addressBook)){ // 添加失败接收0，添加成功接收1
                    cout << "通讯录已满，无法添加\n任意键继续..." << endl;
                    system("read");
                }
                break;

            case 2: // 显示
                showLinkMan(&addressBook);
                break;

            case 3: // 删除
                deleteLinkMan(&addressBook);
                break;

            case 4: // 查找
                findLinkMan(&addressBook);
                break;

            case 5: // 修改
                modifyLinkMan(&addressBook);
                break;

            case 6: // 清空
                clearLinkMan(&addressBook);
                break;
        }
    }
}
