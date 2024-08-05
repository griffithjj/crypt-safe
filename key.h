#ifndef KEY_H
#define KEY_H

#include <QObject>

class Key : public QObject
{
    Q_OBJECT
public:
    explicit Key(QObject *parent = nullptr);

signals:
};

#endif // KEY_H
