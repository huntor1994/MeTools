#include "command-controller.h"
namespace metools {
namespace controllers {
class CommandController::Implementation{
public:
    Implementation(CommandController *_commandController)
        :commandController(_commandController)
    {
        clipboard= QGuiApplication::clipboard();

        Command* clipboardTextFormatCommand=new Command(commandController,QChar(0xf0c7),"Save");
        QObject::connect(clipboardTextFormatCommand
                         ,&Command::executed
                         ,commandController
                         ,&CommandController::onClipboardTextFormatExecuted);
        workAreaViewCommands.append(clipboardTextFormatCommand);

    }
    CommandController *commandController{nullptr};
    QList<metools::framework::Command*> workAreaViewCommands{};
    QClipboard* clipboard{nullptr};
    QString lastText="";
};


CommandController::CommandController(QObject* _parent)
    : QObject(_parent)
{
    implementation.reset(new Implementation(this));
}
CommandController::~CommandController(){}

QQmlListProperty<metools::framework::Command> CommandController::ui_workAreaViewCommands(){
    return QQmlListProperty<metools::framework::Command>(this,&implementation->workAreaViewCommands);
}

void CommandController::onClipboardTextFormatExecuted(bool isExecuted){
    if(isExecuted){
        qDebug() << "You executed the ClipboardTextFormat command!";
        connect(implementation->clipboard,&QClipboard::dataChanged,this,&CommandController::clipboardTextFormat,Qt::QueuedConnection);
    }
    else{
        qDebug() << "You executed the ClipboardTextFormatUndo command!";
        disconnect(implementation->clipboard,&QClipboard::dataChanged,this,&CommandController::clipboardTextFormat);
    }
}

void CommandController::clipboardTextFormat(){
    QString clipboardText=implementation->clipboard->text();
    if(clipboardText==""||clipboardText==implementation->lastText)return;
    implementation->lastText=clipboardText.remove("\n");
    implementation->clipboard->setText(implementation->lastText);
}

}
}
