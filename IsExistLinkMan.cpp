#include "ABMS.h"

int isExistLinkMan(const AddressBook *addressBook, string name){
    for (int i = 0; i < addressBook->linkManNumber; ++i) {      // 循环数组查找与条件匹配的联系人
        if (addressBook->linkManArray[i].linkManName == name){
            return i+1;   // 找到该联系人返回编号
        }
    }
    return 0;   // 没找到返回0
}