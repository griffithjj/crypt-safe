#include "gui.h"

#include <QPushButton>
#include <QGridLayout>

Gui::Gui(QWidget *parent)
    : QWidget(parent),
    m_AddKeyButton(new QPushButton("Add key")),
    m_ShowKeysButton(new QPushButton("Show keys")),
    m_DeleteKeyButton(new QPushButton("Delete key"))
{
    setupGui();
}

Gui::~Gui() {}

void Gui::setupGui(){

    QGridLayout* layout{new QGridLayout};

    layout->addWidget(m_AddKeyButton, 0,0);
    layout->addWidget(m_ShowKeysButton, 1,0);
    layout->addWidget(m_DeleteKeyButton, 2,0);

    this->setWindowTitle("CryptSafe");
    this->setLayout(layout);
}
