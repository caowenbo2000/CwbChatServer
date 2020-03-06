//
// Created by cwb on 2020/3/6.
//
#include <stdio.h>
#include "CwbMysql.h"

CwbMysql::CwbMysql()
{
    Cwbsql = mysql_init(NULL);
    mysql_real_connect(Cwbsql, "localhost", "root", "root", "CwbChat", 0, NULL, 0);
}


CwbMysql::~CwbMysql()
{
    mysql_close(Cwbsql);
    delete Cwbsql;
    Cwbsql = NULL ;
}

void CwbMysql::CwbSqlQuery()
{
    mysql_query(Cwbsql, "CREATE TABLE writers(name VARCHAR(25))");
}



