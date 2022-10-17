#include "master-controller.h"
namespace metools {
namespace controllers {
class MasterController::Implementation
{
public:
    Implementation(MasterController* _masterController):
        masterController(_masterController){
        commandController=new CommandController(masterController);
    }
    MasterController* masterController{nullptr};
    CommandController* commandController{nullptr};
};
MasterController::MasterController(QObject *parent)
    : QObject{parent}
{
    implementation.reset(new Implementation(this));
}

MasterController::~MasterController()
{


}

CommandController* MasterController::commandController(){
    return implementation->commandController;

}

}}
