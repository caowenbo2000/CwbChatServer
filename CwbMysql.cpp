//
// Created by cwb on 2020/3/6.
//
#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>
#include "CwbMysql.h"

CwbMysql::CwbMysql()
{
    Cwbsql = mysql_init(NULL);
    mysql_real_connect(Cwbsql, "localhost", "root", "root", "CwbChat", 0, NULL, 0);
}


CwbMysql::~CwbMysql()
{
    mysql_close(Cwbsql);
    Cwbsql = NULL ;
}

bool CwbMysql::CwbSqlQuery(LogMsg CurLog)
{
    std::stringstream fuck;
    std::string query;
    char p[256];
    sprintf(p,"select * from User where Id='%d' and PassWord ='%s';",CurLog.Id,CurLog.PassWord);
    std::cout << p <<std::endl;
    if(mysql_query(Cwbsql, p))
    {
        perror("Your User Query Failed");
        return 0;
    }
    MYSQL_RES *LoginRes = mysql_store_result(Cwbsql);
    bool LoginSuccess=mysql_num_rows(LoginRes);
    mysql_free_result(LoginRes);
    return LoginSuccess;

}



