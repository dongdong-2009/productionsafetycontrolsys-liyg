#ifndef RIS_SINGLETON_H
#define RIS_SINGLETON_H

#ifndef NULL
#define NULL    (0)
#endif

template<class T>
class RIS_Singleton
{
public:
    ~RIS_Singleton();
    static T* instance();
protected:
    RIS_Singleton();

private:
    static T* instance_;
};

template<class T> T* RIS_Singleton<T>::instance_ = NULL;

template<class T>
RIS_Singleton<T>::~RIS_Singleton()
{
}

template<class T>
RIS_Singleton<T>::RIS_Singleton()
{

}

template<class T>  T* RIS_Singleton<T>::instance()
{
        if (NULL == instance_) {
                instance_ = new T();
        }
        return instance_;
}


#endif // RIS_SINGLETON_H
