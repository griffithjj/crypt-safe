#ifndef GUI_H
#define GUI_H

#include <QWidget>

class Gui : public QWidget
{
    Q_OBJECT

public:
    Gui(QWidget *parent = nullptr);
    ~Gui();
};
#endif // GUI_H
