#ifndef PLDS_MSG_DEF_H
#define PLDS_MSG_DEF_H


#if 0


#include "common.h"

#define EventDb     (2000)          //��ϵ���ݿ�
#define EventRdb    (3000)          //ʵʱ���ݿ�
#define EventMem    (4000)          //�ڴ����ݿ�
#define EventModel  (5000)          //ʵʱϵͳģ��
#define EventCalc   (6000)          //�����¼�
#define EventControl (7000)          //��������



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
    ACTION_SYSTEM_START = ACTION_COMMON +1,     //ϵͳ��ʼ��
    ACTION_SYSTEM_EXIT,                         //ϵͳ�˳�
    ACTION_SYSTEM_SCAN,                         //��ʼɨ���Ƿ���Լ���
    ACTION_BACK_MIDDLE_VAR,                     //�����м����
    ACTION_UPDATE_DAY,
    ACTION_UPDATE_WEEK,
    ACTION_UPDATE_MOON,
    ACTION_UPDATE_YEAR,
    ACTION_RDB_GET_REAL_DATA = ACTION_RDB+1,    //��ȡʵʱ���ݿ��е����е�ǰ����
    ACTION_RDB_SET_WRITE_DATA,                  //��д������ɵ�������ʵʱ���ݿ�
	ACTION_RDB_SET_MULTI_WRITE_DATA,			//ͬ��һ����д����ֵ
    ACTION_RDB_GET_REAL_DATA_FINSH,             //ʵʱ���ݿ�ˢ�����
    ACTION_RDB_GET_REAL_DATA_FAIL,              //��ȡʵʱ���ݿ⵱ǰ����ʧ��
    ACTION_RDB_GET_HISTORY_DATA,                //��ȡʵʱ���ݿ���ʷ����
    ACTION_RDB_GET_SET_HISTORY_STATE,		//�õ��������ʷ��ͣ״̬
    ACTION_RDB_GET_HISTORY_DATA_DAY,
    ACTION_RDB_GET_HISTORY_DATA_MOON,
    ACTION_RDB_GET_HISTORY_DATA_YEAR,
    ACTION_RDB_GET_HISTORY_DATA_WEEK,

    ACTION_RDB_INIT_FINSH,                      //ʵʱ���ݳ�ʼ�����
    ACTION_CALC_INIT = ACTION_CALC+1,           //��ʼ��ʼ������ģ��
    ACTION_CALC_FINSH,                          //����ģ�ͳ�ʼ�����
    ACTION_CALC_CALC_BEGIN,                     //����ģ�Ϳ�ʼ����
    ACTION_CALC_CALC_END,                       //����ģ�ͽ�������
    ACTION_MEM_INIT_SUCCESS = ACTION_MEM+1,     //�ڴ����ݿ��ʼ���ɹ�
    ACTION_MEM_INIT_FAIL,                       //�ڴ����ݿ��ʼ��ʧ��
    ACTION_MEM_WRITE_DATA,                      //�ڴ����ݿ�д����
	ACTION_MEM_MUTIL_WRITE_DATA,				//ͬʱд����ֵ 
    ACTION_ODB_UPATE = ACTION_ODB,              //���¹�ϵ���ݿ������
    ACTION_MODEL_INIT_FINSH = ACTION_MODEL+1,   //ģ�ͳ�ʼ�����

    ACTION_END

};

enum EVENT{
    EVENT_SYSTEM_START = EVENT_COMMON + 1,
    EVENT_RDB_INIT_FINSH = EVENT_RDB +1,   //ʵʱ���ݿ��ʼ�����
    EVENT_RDB_GET_REAL_DATA,               //��ȡʵʱ���ݿ��������
    EVENT_RDB_GET_HISTORY_DATA_DAY,
    EVENT_RDB_GET_SET_HISTORY_STATE,		//��ȡ������ͣ�������
    EVENT_RDB_GET_HISTORY_DATA_WEEK,
    EVENT_RDB_GET_HISTORY_DATA_MOON,
    EVENT_RDB_GET_HISTORY_DATA_YEAR,
    EVENT_RDB_GET_HISTORY_DATA_FAIL,
    EVENT_MODEL_INIT_FINSH = EVENT_MODEL+1, //����ʵʱϵͳģ�ͳ�ʼ�����
    EVENT_MODEL_INIT_FAIL,                  //����ʵʱϵͳģ�ͳ�ʼ��ʧ��
    EVENT_CALC_INIT_FINSH = EVENT_CALC+1,   //����ʵʱϵͳ����ģ�ͳ�ʼ�����
    EVENT_CALC_BEGIN_CALC,                  //��ʼ����
    EVENT_CALC_INIT_FAIL,                   //����ʵʱϵͳ����ģ�ͳ�ʼ��ʧ��
    EVENT_CALC_CALC_END,                    //����ģ�ͼ������
    EVENT_MEM_WRITE_DATA_OK,
    EVENT_MEM_WRITE_DATA_FAIL,
    EVENT_END
};


#endif

#endif // PLDS_MSG_DEF_H

