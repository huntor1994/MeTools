#ifndef MASTERCONTROLLER_H
#define MASTERCONTROLLER_H

#include <QObject>
#include <QtQml/QQmlListProperty>
#include <metools-lib_global.h>
#include <controllers/command-controller.h>

namespace metools {
namespace controllers {
class METOOLSLIBSHARED_EXPORT MasterController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(metools::controllers::CommandController* ui_commandController READ commandController CONSTANT)

public:
    explicit MasterController(QObject *parent = nullptr);
    ~MasterController() override;
    CommandController* commandController();
private:
    class Implementation;
    QScopedPointer<Implementation> implementation;
};
}
}


#endif // MASTERCONTROLLER_H
