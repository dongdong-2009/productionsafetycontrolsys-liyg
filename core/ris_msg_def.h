#ifndef PLDS_MSG_DEF_H
#define PLDS_MSG_DEF_H


#if 0


#include "common.h"

#define EventDb     (2000)          //关系数据库
#define EventRdb    (3000)          //实时数据库
#define EventMem    (4000)          //内存数据库
#define EventModel  (5000)          //实时系统模型
#define EventCalc   (6000)          //计算事件
#define EventControl (7000)          //控制中心



enum MESSAGE_TYPE{
    ACTION_COMMON = ((GROUP_COMMON | ACTION_FLAG)<<24),
    EVENT_COMMON = ((GROUP_COMMON | EVENT_FLAG)<<24),
    ACTION_RDB = ((GROUP_RDB | ACTION_FLAG)<<24),
    EVENT_RDB = ((GROUP_RDB | EVENT_FLAG)<<24),
    ACTION_ODB = ((GROUP_ODB | ACTION_FLAG)<<24),
    EVENT_ODB = ((GROUP_ODB | EVENT_FLAG)<<24),
    ACTION_MEM = ((GROUP_ODB | ACTION_FLAG)<<24),
    EVENT_MEM = ((GROUP_ODB | EVENT_FLAG)<<24),
    ACTION_MODEL = ((GROUP_MODEL | ACTION_FLAG)<<24),
    EVENT_MODEL = ((GROUP_MODEL | EVENT_FLAG)<<24),
    ACTION_CALC = ((GROUP_CALC | ACTION_FLAG)<<24),
    EVENT_CALC = ((GROUP_CALC | EVENT_FLAG)<<24),
    MESSAGE_TYPE_END
};

//enum MESSAGE_PLANTMGNT{
//    ACTION_PT = ((GROUP_PLANTMGNT | ACTION_FLAG)<<24),
//    ACTION_PT_UNITSBROWSE = ((ACTION_PT | 0x00FF0000)&((SUBGROUP_PLANT_UNITSBROWSE<<16)|0xFF000000)),
//    ACTION_PT_UNITSMGNT = ((ACTION_PT | 0x00FF0000)&((SUBGROUP_PLANT_UNITSMGNT<<16)|0xFF000000)),
//    ACTION_PT_UNITBROWSE = ((ACTION_PT | 0x00FF0000)&((SUBGROUP_PLANT_UNITBROWSE<<16)|0xFF000000)),
//    ACTION_PT_UNITMGNT = ((ACTION_PT | 0x00FF0000)&((SUBGROUP_PLANT_UNITMGNT<<16)|0xFF000000)),
//    EVENT_PT = ((GROUP_PLANTMGNT | EVENT_FLAG)<<24),
//    ACTION_PT_END
//};

//ACTION format: GROUP(high 8 bit) + SUBGROUP(middle 8 bit) + action id(low 16 bit)


enum ACTION{
    ACTION_SYSTEM_START = ACTION_COMMON +1,     //系统初始化
    ACTION_SYSTEM_EXIT,                         //系统退出
    ACTION_SYSTEM_SCAN,                         //开始扫描是否可以计算
    ACTION_BACK_MIDDLE_VAR,                     //备份中间变量
    ACTION_UPDATE_DAY,
    ACTION_UPDATE_WEEK,
    ACTION_UPDATE_MOON,
    ACTION_UPDATE_YEAR,
    ACTION_RDB_GET_REAL_DATA = ACTION_RDB+1,    //获取实时数据库中的所有当前数据
    ACTION_RDB_SET_WRITE_DATA,                  //回写计算完成的数据至实时数据库
	ACTION_RDB_SET_MULTI_WRITE_DATA,			//同上一次性写入多个值
    ACTION_RDB_GET_REAL_DATA_FINSH,             //实时数据库刷新完成
    ACTION_RDB_GET_REAL_DATA_FAIL,              //获取实时数据库当前数据失败
    ACTION_RDB_GET_HISTORY_DATA,                //获取实时数据库历史数据
    ACTION_RDB_GET_SET_HISTORY_STATE,		//得到机组的历史启停状态
    ACTION_RDB_GET_HISTORY_DATA_DAY,
    ACTION_RDB_GET_HISTORY_DATA_MOON,
    ACTION_RDB_GET_HISTORY_DATA_YEAR,
    ACTION_RDB_GET_HISTORY_DATA_WEEK,

    ACTION_RDB_INIT_FINSH,                      //实时数据初始化完成
    ACTION_CALC_INIT = ACTION_CALC+1,           //开始初始化计算模型
    ACTION_CALC_FINSH,                          //计算模型初始化完成
    ACTION_CALC_CALC_BEGIN,                     //计算模型开始计算
    ACTION_CALC_CALC_END,                       //计算模型结束计算
    ACTION_MEM_INIT_SUCCESS = ACTION_MEM+1,     //内存数据库初始化成功
    ACTION_MEM_INIT_FAIL,                       //内存数据库初始化失败
    ACTION_MEM_WRITE_DATA,                      //内存数据库写数据
	ACTION_MEM_MUTIL_WRITE_DATA,				//同时写入多个值 
    ACTION_ODB_UPATE = ACTION_ODB,              //更新关系数据库的内容
    ACTION_MODEL_INIT_FINSH = ACTION_MODEL+1,   //模型初始化完成

    ACTION_END

};

enum EVENT{
    EVENT_SYSTEM_START = EVENT_COMMON + 1,
    EVENT_RDB_INIT_FINSH = EVENT_RDB +1,   //实时数据库初始化完成
    EVENT_RDB_GET_REAL_DATA,               //获取实时数据库数据完成
    EVENT_RDB_GET_HISTORY_DATA_DAY,
    EVENT_RDB_GET_SET_HISTORY_STATE,		//获取机组启停数据完成
    EVENT_RDB_GET_HISTORY_DATA_WEEK,
    EVENT_RDB_GET_HISTORY_DATA_MOON,
    EVENT_RDB_GET_HISTORY_DATA_YEAR,
    EVENT_RDB_GET_HISTORY_DATA_FAIL,
    EVENT_MODEL_INIT_FINSH = EVENT_MODEL+1, //生产实时系统模型初始化完成
    EVENT_MODEL_INIT_FAIL,                  //生产实时系统模型初始化失败
    EVENT_CALC_INIT_FINSH = EVENT_CALC+1,   //生产实时系统计算模型初始化完成
    EVENT_CALC_BEGIN_CALC,                  //开始计算
    EVENT_CALC_INIT_FAIL,                   //生产实时系统计算模型初始化失败
    EVENT_CALC_CALC_END,                    //计算模型计算完成
    EVENT_MEM_WRITE_DATA_OK,
    EVENT_MEM_WRITE_DATA_FAIL,
    EVENT_END
};


#endif

#endif // PLDS_MSG_DEF_H

