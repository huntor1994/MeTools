#ifndef COMMANDCONTROLLER_H
#define COMMANDCONTROLLER_H

#include <QObject>
#include <metools-lib_global.h>
#include <framework/command.h>
#include <QtQml/QQmlListProperty>
#include <QClipboard>
#include <QGuiApplication>
#include <QThread>
using namespace metools::framework;

namespace metools {
namespace controllers {
class METOOLSLIBSHARED_EXPORT CommandController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<metools::framework::Command>
               ui_workAreaViewCommands READ
               ui_workAreaViewCommands
               CONSTANT)
public:
    explicit CommandController(QObject* _parent = nullptr);
    ~CommandController()override;

     QQmlListProperty<framework::Command> ui_workAreaViewCommands();
public slots:
    void onClipboardTextFormatExecuted(bool isExecuted);

private:
    class Implementation;
    QScopedPointer<Implementation> implementation;
    void clipboardTextFormat();
};

}
}

#endif // COMMANDCONTROLLER_H
