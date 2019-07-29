#include <iostream>
#include <string>
using namespace std;

#define MAX 1000

struct LinkMan{ // 联系人结构体
    string linkManName;     // 姓名
    int linkManGender;      // 性别(1男，0女)
    int linkManAge;         // 年龄
    string linkManPhone;    // 电话
    string linkManAddress;  // 地址
};

struct AddressBook{ // 通讯录结构体
    struct LinkMan linkManArray[MAX];   // 通讯录中保存的联系人数组
    int linkManNumber = 0;                  // 通讯录中当前联系人的人数
};

AddressBook init();
void showMenu();
int addLinkMan(AddressBook *addressBook);
void showLinkMan(const AddressBook *addressBook);
int isExistLinkMan(const AddressBook *addressBook, string name);
int deleteLinkMan(AddressBook *addressBook);
int findLinkMan(const AddressBook *addressBook);
int modifyLinkMan(AddressBook *addressBook);
int clearLinkMan(AddressBook *addressBook);