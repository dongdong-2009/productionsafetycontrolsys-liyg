#ifndef TEXTSPEECH_H
#define TEXTSPEECH_H

#include <QObject>
#include<QAxObject>

class TextSpeech : public QObject
{
    Q_OBJECT
public:
    explicit TextSpeech(QObject *parent = 0);
    ~TextSpeech();
    bool initSpeech();
    bool speak(QString txt);

    void setRate(int rate);

    void setVolume(int value);
    bool isSpeaking();

private:
    QAxObject _voice;
    bool _binit;
    bool _bReading;

signals:
    void speakComplete();

private slots:
    void dealevent(QString name, int arc , void* argv);

};

#endif // TEXTSPEECH_H
