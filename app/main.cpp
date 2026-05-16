#include "agari_vector.h"
#include <fstream>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QCoreApplication>
#include <QUrl>

void write_agari_vectors_to_file(const std::string& filename)
{
    const auto vectors = enumerate_agari_vectors();

    std::ofstream ofs(filename);

    if (!ofs) {
        throw std::runtime_error("failed to open file: " + filename);
    }

    ofs << "index,0,1,2,3\n";

    for (std::size_t i = 0; i < vectors.size(); ++i) {
        const auto& v = vectors.at(i);

        ofs << i << ','
            << to_string(v.at(0)) << ','
            << to_string(v.at(1)) << ','
            << to_string(v.at(2)) << ','
            << to_string(v.at(3)) << '\n';
    }
}
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    const QUrl url(QStringLiteral("qrc:/qt/qml/Test/Main.qml"));

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl) {
                QCoreApplication::exit(-1);
            }
        },
        Qt::QueuedConnection
    );

  write_agari_vectors_to_file("/home/kodai/src/PrivateCpp/Test/result.csv");
    engine.load(url);

    return app.exec();
}
