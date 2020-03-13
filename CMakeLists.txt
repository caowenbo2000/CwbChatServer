cmake_minimum_required(VERSION 3.15)
project(CwbChatServer)

set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_BUILD_TYPE Debug)
add_executable(CwbChatServer main.cpp MyTcpSocket.cpp MyTcpSocket.h CwbMysql.cpp CwbMysql.h Msg.h)


set(INC_DIR /usr/include/mysql/)
set(LINK_DIR /usr/lib/x86_64-linux-gnu/)
include_directories(${INC_DIR})
link_directories(${LINK_DIR})

target_link_libraries(CwbChatServer  libmysqlclient.so)
