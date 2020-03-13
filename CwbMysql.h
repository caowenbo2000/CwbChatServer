//
// Created by cwb on 2020/3/6.
//

#ifndef CWBCHATSERVER_CWBMYSQL_H
#define CWBCHATSERVER_CWBMYSQL_H
#include <mysql.h>
#include "Msg.h"
class CwbMysql
{
public:
    CwbMysql();
    ~CwbMysql();
    bool CwbSqlQuery(LogMsg CurLog);
private:
    MYSQL *Cwbsql;
};


#endif //CWBCHATSERVER_CWBMYSQL_H
