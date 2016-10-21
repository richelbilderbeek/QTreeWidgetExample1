#include <QApplication>
#include <QTreeWidget>
#include <QTreeWidgetItem>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QTreeWidget w;
  w.show();
  return a.exec();
}
