#include <QCoreApplication>
#include <QDir>
#include <QtDebug>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Creando varios directorios
    QList<QDir> directorios;
    directorios.append(QDir::current());
    directorios.append(QDir::home());
    directorios.append(QDir::root());
    directorios.append(QDir::temp());

    // Recorrer los directorios
    qDebug() << "\nListar varios directorios:";
    foreach (QDir d, directorios) {
        qDebug() << d.absolutePath();
    }

    // Creando un directorio a partir de un path
    QDir directorio("/home/rodrigo/archivos");

    // Obteniendo información del directorio home
    qDebug() << "\nObteniendo información de" << directorio.absolutePath() << ":";
    QFileInfoList contenido = directorio.entryInfoList();
    foreach (const QFileInfo &info, contenido) {
        qDebug() << "Nombre:" << info.fileName();
        qDebug() << "Es directorio:" << info.isDir();
        qDebug() << "Se puede escribir:" << info.isWritable();
        qDebug() << "Última de creación:" << info.lastModified().toString();
        qDebug() << "-------------------";
    }

    // Listar contenido mediante un filtro
    qDebug() << "\nListar archivos de C++ ordenados:";
    QStringList extenciones = {"*.cpp", "*.h"};
    contenido = directorio.entryInfoList(extenciones, QDir::Files, QDir::Name);
    foreach (const QFileInfo &info, contenido) {
        qDebug() << info.fileName();
    }

    // Cambiando de directorio
    QString carpeta = "clase-03";
    qDebug() << "\nIngresando a" << carpeta;
    if (!directorio.cd(carpeta)){
        qWarning() << "No existe el direcotorio" << carpeta;
    }else{
        QStringList contenido = directorio.entryList();
        foreach (QString elemento, contenido) {
            qDebug() << elemento;
        }
        directorio.cdUp();
    }


    //Creando un nuevo directorio
    qDebug() << "\nCreando un directorio:";
    QString nuevo = "Archivos X";
    if (directorio.mkdir(nuevo)){
        qDebug() << nuevo << "creado con éxito!";

        QStringList contenido = directorio.entryList(QDir::Dirs);
        foreach (QString elemento, contenido) {
            qDebug() << elemento;
        }

    }else{
        qWarning() << "No se pudo crear el directorio" << nuevo;
    }


    return 0;
}
