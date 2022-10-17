#include "master-controller.h"
namespace metools {
namespace controllers {
class MasterController::Implementation
{
public:
    Implementation(MasterController* _masterController):
        masterController(_masterController){


    }
    MasterController* masterController{nullptr};

};
MasterController::MasterController(QObject *parent)
    : QObject{parent}
{
    //implementation.reset(new Implementation(this));
}

MasterController::~MasterController()
{


}


}}
