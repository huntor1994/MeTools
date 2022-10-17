#include "command.h"
namespace metools {
namespace framework {
class Command::Implementation{
public:
    Implementation(const QString& _iconCharacter,const QString& _description,std::function<bool()> _canExevute)
        :iconCharacter(_iconCharacter),
          description(_description),
          canExecute(_canExevute){}
    QString iconCharacter;
    QString description;
    std::function<bool()> canExecute;
};

Command::Command(QObject* parent,
                 const QString& iconCharacter,
                 const QString& description,
                 std::function<bool()> canExecute):QObject(parent)
{
    implementation.reset(new Implementation(iconCharacter,description,canExecute));
}

Command::~Command()
{
}
const QString Command::iconCharacter() const{
    return implementation->iconCharacter;
}
const QString Command::description() const{
    return implementation->description;
}
bool Command::canExecute() const{
    return implementation->canExecute();
}
}}
