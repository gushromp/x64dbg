#ifndef SEARCHLISTVIEW_H
#define SEARCHLISTVIEW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include "StdTable.h"

namespace Ui {
    class SearchListView;
}

class SearchListView : public QWidget
{
    Q_OBJECT

public:
    explicit SearchListView(QWidget* parent = 0);
    ~SearchListView();

    StdTable* mList;
    StdTable* mSearchList;
    StdTable* mCurList;
    QLineEdit* mSearchBox;

private slots:
    void searchTextChanged(const QString &arg1);
    void listKeyPressed(QKeyEvent* event);
    void listContextMenu(const QPoint & pos);

signals:
    void enterPressedSignal();
    void listContextMenuSignal(const QPoint & pos);

private:
    Ui::SearchListView* ui;
    QVBoxLayout* mMainLayout;
    QVBoxLayout* mListLayout;
    QWidget* mListPlaceHolder;

};

#endif // SEARCHLISTVIEW_H