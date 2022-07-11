#ifndef DB_MANAGER_H
#define DB_MANAGER_H

#include <QObject>
#include <memory>

#include "Support/database.h"
#include "Support/editablesqlmodel.h"

class DB_Manager : public QObject
{
    Q_OBJECT

public:
    explicit DB_Manager(QObject *parent = nullptr);

    bool CreateNew(QString file, QString Password);
    bool OpenExist(QString file);
    bool isOpen();

    Database* getDB(){ return &DB; }
    EditableSqlModel* getModel(){ return Model; }

signals:
    void signal_BDisCreate(EditableSqlModel *Model);
    void signal_TabisCreate();
    void signal_getPass();

public slots:
    void slot_NewBD_Ok(QString file, QString NameTab, QString TabQuery, QString Pass);
    void slot_NewTab_Ok(QString NameTab, QString TabQuery);
    void slot_OpenW_Ok(QString Path);
    void slot_getPass_Ok(QString Pass);

private:
    EditableSqlModel *Model;
    Database DB;
};

#endif // DB_MANAGER_H
