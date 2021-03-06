#ifndef HELP_HPP
#define HELP_HPP

#include <QWidget>
#include <QtGui>
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>

namespace Ui {
class Help;
}

class Help : public QWidget
{
    Q_OBJECT

public:
    explicit Help(QWidget *parent = nullptr);
    virtual ~Help();

private:
    Ui::Help *ui;
};

#endif // HELP_HPP
