#include "ABMS.h"

AddressBook init(){
    AddressBook addressBook;        // 新建一个通讯录
    addressBook.linkManNumber = 0;  // 初始化通讯录联系人数为0

    return addressBook; // 返回初始化的通讯录
}