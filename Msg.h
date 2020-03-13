//
// Created by cwb on 2020/3/11.
//

#ifndef CWBCHATSERVER_MSG_H
#define CWBCHATSERVER_MSG_H

#define ByteNumber 284
struct MsgFormat
{
    int SenderID;
    int RecverID;
    char MsgTime[20]; //2016-01-07T14:36:16
    char MsgContent[256];
};//28 + 256 = 284

struct LogMsg
{
    int Id;
    char PassWord[32];
};

#endif //CWBCHATSERVER_MSG_H
