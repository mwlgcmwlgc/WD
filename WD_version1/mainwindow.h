#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QMap>
#include <QTreeWidgetItem>
#include "user.h"
#include "goods.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int USERID;
    int GOODSID;
    User* curUser;
    QList<Buyer> vecBuyer;
    QList<Member> vecMember;
    QList<Seller> vecSeller;
    QList<Food> vecFood;
    QList<Electronics> vecElectronics;
    QList<DailyNecessities> vecDailyNecessities;

    /*********************  Custom Functions *****************************/
    bool loadData();
    User* findUser(QString userName, int &pos);
    Goods* findGoods(int id, int& pos);
    void addTreeNode(QTreeWidgetItem* parent, Food *food);
    void addTreeNode(QTreeWidgetItem* parent, Electronics *elect);
    void addTreeNode(QTreeWidgetItem* parent, DailyNecessities *daily);
    void addTreeRecord(QStringList rec);

    /***********************  reset  ************************************/
    void resetLoginPage();
    void resetRegisterPage();
    void resetMainPage();
    void resetManagePage();

private slots:

    /**********************  loginPage  *******************************/
    void loginPage_textChanged();

    void on_pushButton_login_clicked();

    void on_pushButton_quit_clicked();

    void on_pushButton_now_clicked();

    /**********************  registerPage  ******************************/
    void registerPage_textChanged();

    void on_pushButton_register_clicked();

    void on_pushButton_back_clicked();

    /************************  mainPage  ********************************/

    /////////////////////////  pageBuyer  /////////////////////////////
    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_spinBox_buyer_valueChanged(int arg1);

    void on_pushButton_buy_clicked();

    ////////////////////////  pageSeller  ////////////////////////////

    void on_radioButton_all_clicked();

    void on_radioButton_mine_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_lineEdit_name_textChanged(const QString &arg1);

    void on_spinBox_seller_valueChanged(int arg1);

    void on_pushButton_in_clicked();

    /************************  managePage  *******************************/
    void on_pushButton_Recharge_clicked();

    void on_pushButton_Upgrade_clicked();

    void on_pushButton_Exchange_clicked();

    void on_pushButton_record_clicked();

    void on_pushButton_back_record_clicked();

    void on_lineEdit_Token_textChanged(const QString &arg1);

    /**********************  action  ***********************************/
    void on_action_deal_triggered();

    void on_action_manage_triggered();

    void on_action_logout_triggered();

    void on_action_exit_triggered();

    void on_action_about_triggered();

};

#endif // MAINWINDOW_H
