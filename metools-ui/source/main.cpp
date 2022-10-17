#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QWindow>

#include <controllers/master-controller.h>
#include <controllers/command-controller.h>
#include <framework/command.h>
#include <QClipboard>

int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QGuiApplication app(argc, argv);
    qmlRegisterType<metools::controllers::CommandController>("METOOLS",1,0,"CommandController");
    qmlRegisterType<metools::controllers::MasterController>("METOOLS",1,0,"MasterController");
    qmlRegisterType<metools::framework::Command>("METOOLS",1,0,"Command");
    metools::controllers::MasterController masterController(nullptr);

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("masterController", &masterController);
    engine.addImportPath("qrc:/");


    const QUrl url(QStringLiteral("qrc:/views/MasterView.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
