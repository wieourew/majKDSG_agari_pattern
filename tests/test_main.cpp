#include <QtTest/QtTest>

class BasicTest : public QObject
{
    Q_OBJECT

private slots:
    void sanity()
    {
        QVERIFY(true);
    }
};

QTEST_MAIN(BasicTest)

#include "test_main.moc"
