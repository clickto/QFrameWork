#ifndef PLUGINMANAGER_H
#define PLUGINMANAGER_H

#include "./Interfaces/PluginInterFace.h"

#include <QObject>
#include <QMap>

class PluginManager : public QObject
{
    Q_OBJECT
public:
    explicit PluginManager(QObject *parent = 0);
    QMap<QString, PluginInterFace*> FindPlugin();

private:
    QMap<QString, PluginInterFace*> _MapPlugin;

signals:

public slots:
};

#endif // PLUGINMANAGER_H
