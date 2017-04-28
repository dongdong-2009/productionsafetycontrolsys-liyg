#ifndef COMMON_H
#define COMMON_H

extern float g_version;

#define MAXSETRDBVALUENUMBER	(500)
#define MAXSETMEMVALUENUMBER	(500)

#define LOGOUT      (0)
#define LOGIN       (1)

#define MAXCALCTIME             (10)
#define COMPANYCALCFINSH        (1)
#define COMPANYCALCNOTFINSH     (0)

#define APPSTATEINFO    ("DT.DT.DT.STATEINFO")
#define STATEINFO       (".STATEINFO")
#define APPVALUE		(".VALUE")
#define MINSCANCYCLETIME    (100)
#define VARFILENAME     ("risCalcVar.ini")
#define VARFILENAMETIME	("CaclTime")

#define STATEFILENAME	("risCalcState.ini")
#define STATEFILENAMETIME	("StateTime")

#define INVAILDVALUE    (-1)

#define MIDDLEVALUE      ("_M")
#define MIDDLEVALUEF     ("_MF")
#define MIDDLEVALUES     ("_MS")

#define MIDDLEVALUESUM      ("_MSUM")
#define MIDDLEVALUENUM   ("_MNUM")

//�������ͣ
#define SET_ON_OFF      ("_900")

#define YEAR_STR    ('Y')
#define MONTH_STR    ('M')
#define DATE_STR    ('D')
#define WEEK_STR    ('W')

#define ENERGY_ALL    ("9999")
#define CALCCYCLE       (3000)
#define UPDATECYCLE		(2000*60)

#define ACTION_FLAG (0x80)
#define EVENT_FLAG  (0x00)

#if 0

|  GROUP         |  SUBGROUP      |  INFO          |  INFO          |
=====================================================================
| 7 6 5 4 3 2 1 0| 7 6 5 4 3 2 1 0| 7 6 5 4 3 2 1 0| 7 6 5 4 3 2 1 0|
=====================================================================


#endif

#if 0


//GROUP should be less than 127
enum GROUP
{
    GROUP_COMMON = 1,   //��������
    GROUP_RDB = 2,      //ʵʱ���ݿ����
    GROUP_ODB = 3,      //��ϵ���ݿ����
    GROUP_MEM = 4,      //�ڴ����ݿ����
    GROUP_MODEL=5,      //ʵʱϵͳģ�͹���
    GROUP_CALC=6,       //����������
    GROUP_END
};


enum ERROR_TYE
{
    ERROR_NO_ERROR = 0,
    ERROR_DBERROR = -1,
    ERROR_RDBERROR = -2,
    ERROR_END
};



enum NODE_TYPE
{
  NODE_UNDEFINE = 0,
  NODE_DT,			//���Ƽ���
  NODE_COMPANY,			//�ֹ�˾
  NODE_PLANT,			//�糧
  NODE_UNIT,                    //�糡
  NODE_UNIT1,                   //�ӷ糡
  NODE_SET,			//����
  NODE_END
};

enum CALC_TYPE
{
    CACL_REAL = 0,
    CACL_DAY,
    CACL_WEEK,
    CACL_MOON,
    CACL_SEASON,
    CACL_YEAR,
    CACL_END
};//�������� 0:ʵʱ 1���� 2���� 3���� 4���� 5����


    enum ENERGY_TYPE
    {
            ENERGY_FIRE=0,			//���
            ENERGY_WATER,			//ˮ��
            ENERGY_WIND,			//���
            ENERGY_GAS,				//ȼ��
            ENERGY_BIOMASS,			//������
            ENERGY_LIGHT,			//���

    };

#define ENERGY_ALL  ("9999")

    struct stTag:public Tag
    {
        //ֵ�Ƿ�ˢ�£�
        bool isRefresh;
        //ֵ�Ƿ���Ч
        bool isOK;
        stTag()
        {
            isRefresh = false;
            isOK = false;
        }

        stTag& operator =(const stTag& right)
        {
            this->fValue = right.fValue;
            this->isRefresh = right.isRefresh;
            this->lState = right.lState;
            this->lTimeStamp = right.lTimeStamp;
            strcpy(this->szName,right.szName);
            this->isOK = right.isOK;

            return *this;
        }
    };

    typedef struct RdbRead
    {
        char* p_szName;
        int step;
        int no;
        bool flag;
        RdbRead()
        {
            p_szName = NULL;
            step = no =0;
            flag = false;
        }
    }stRdbRead;

#define HIBSUM              "HIBSUM"
#define HIBWAVG             "HIBWAVG"
#define WAVG                "WAVG"
#define PAVG                "PAVG"
#define EVALFDL             "EVALFDL"
#define EVAL                "EVAL"
#define CAPACITY            "Capacity"
#define MACHINETOTALHOUR    "MachineTotalHour"
#define MACHINERUNINGHOURS  "MachineRuningHours"
#define WRITEPOINTS         "WritePoints"
#define RUNINGCAPACITY      "RuningCapacity"


#define RDBGETNUMBER    (1000)

 //{"n":"DT.HN.XT_001","v":9382434.9164,"t":"2013-10-31T15:47:18.0833426+08:00"}

#endif




#endif // COMMON_H
