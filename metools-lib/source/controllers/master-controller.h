#ifndef MASTERCONTROLLER_H
#define MASTERCONTROLLER_H

#include <QObject>
#include <QtQml/QQmlListProperty>
#include <metools-lib_global.h>


namespace metools {
namespace controllers {
class METOOLSLIBSHARED_EXPORT MasterController : public QObject
{
    Q_OBJECT


public:
    explicit MasterController(QObject *parent = nullptr);
    ~MasterController() override;

private:
    class Implementation;
    QScopedPointer<Implementation> implementation;
};
}
}


#endif // MASTERCONTROLLER_H
