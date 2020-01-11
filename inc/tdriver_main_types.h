#ifndef TDRIVER_MAIN_TYPES_H
#define TDRIVER_MAIN_TYPES_H

#include <QString>

class QTreeWidgetItem;
template <class T> class QList;
class QRect;

// types meant to be used in other code

typedef void* TestObjectKey;


typedef QList<QRect> RectList;


struct TreeItemInfo {
    QString type;
    QString name;
    QString id;
    QString env;
};

struct AttributeInfo {
    QString name;
    QString dataType;
    QString type;
    QString value;
};


struct ApplicationInfo {
    bool foreground;
    QString id;
    QString name;
    ApplicationInfo() :foreground(false) {}
    void setForeground(bool fg) { foreground = fg; }
    bool isForeground() { return foreground; }
    void set(const QString &id, const QString &name = QString()) { this->id=id; this->name=name; }
    bool haveId() { return !id.isEmpty(); }
    bool useId() { return (!foreground && !id.isEmpty()); }
    void clearInfo() { id.clear(); name.clear(); }
};


//struct DeviceInfo {
//    QString name;
//    QString type;
//    DeviceInfo(const DeviceInfo &other) : name(other.name), type(other.type) {}
//    DeviceInfo(const QString &name, const QString &type) : name(name),type(type) {}
//    void set(const QString &name, const QString &type) { this->name=name; this->type=type; }
//    void clear() { name.clear(); type.clear(); }
//};


// internal convenience type, not really intended to be used outside this header

typedef QTreeWidgetItem *TestObjectPtrType;



// convenience functions meant to hide static casts

static inline TestObjectPtrType testObjectKey2Ptr(TestObjectKey key) {
    return static_cast<TestObjectPtrType>(key);
}

static inline TestObjectKey ptr2TestObjectKey(TestObjectPtrType ptr) {
    return static_cast<TestObjectKey>(ptr);
}

static inline QString testObjectKey2Str(TestObjectKey key) {
    return QString::number((quintptr)(key));
}

static inline TestObjectKey str2TestObjectKey(const QString &str) {
    return ptr2TestObjectKey(reinterpret_cast<TestObjectPtrType >(
                                 static_cast<quintptr>(str.toULongLong())));
}

#endif // TDRIVER_MAIN_TYPES_H
