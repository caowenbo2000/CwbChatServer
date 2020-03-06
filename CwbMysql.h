//
// Created by cwb on 2020/3/6.
//

#ifndef CWBCHATSERVER_CWBMYSQL_H
#define CWBCHATSERVER_CWBMYSQL_H
#include <mysql.h>

class CwbMysql
{
public:
    CwbMysql();
    ~CwbMysql();
    void CwbSqlQuery();
private:
    MYSQL *Cwbsql;
};


#endif //CWBCHATSERVER_CWBMYSQL_H
