cmake_minimum_required(VERSION 3.13)
project(AddressBookManagementSystem)

set(CMAKE_CXX_STANDARD 14)

add_executable(addressBookManagementSystem
        ABMS.cpp ABMS.h
        ShowMenu.cpp
        Init.cpp
        AddLinkman.cpp
        ShowLinkMan.cpp
        DeleteLinkMan.cpp
        IsExistLinkMan.cpp
        FindLinkMan.cpp
        ModifyLinkMan.cpp
        ClearLinkMan.cpp)