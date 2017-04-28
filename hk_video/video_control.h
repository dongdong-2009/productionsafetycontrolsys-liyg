#ifndef VIDEO_CONTROL_H
#define VIDEO_CONTROL_H

#include "include/HCNetSDK.h"
#include "include/plaympeg4.h"
#include "readdatafrommysql/readdatafrommysql.h"
#include <QLabel>
class Video_Control
{
public:
  Video_Control();
  long lUserID;
  int Start_Video(Video_Info Video_Info);
  void Stop_Video(long VideoId);
  long Video_ID;

  void Video_Logout(long VideoId);
  void Video_Clean();
};

void __stdcall fRealDataCallBack_V30(LONG lPlayHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser);


#endif // VIDEO_CONTROL_H
