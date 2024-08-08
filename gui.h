#ifndef GUI_H
#define GUI_H

#include <QWidget>

class QPushButton;

class Gui : public QWidget
{
    Q_OBJECT

public:
    Gui(QWidget *parent = nullptr);
    ~Gui();

private:
    void setupGui();

    QPushButton* m_AddKeyButton;
    QPushButton* m_ShowKeysButton;
    QPushButton* m_DeleteKeyButton;
};
#endif // GUI_H
