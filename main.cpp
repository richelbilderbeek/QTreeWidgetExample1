#pragma GCC diagnostic push

#include <QApplication>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#pragma GCC diagnostic pop

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QTreeWidget w;
  w.show();
  return a.exec();
}
