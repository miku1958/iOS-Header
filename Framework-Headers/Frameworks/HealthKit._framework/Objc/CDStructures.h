//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CC_SHA256state_st {
    unsigned int count[2];
    unsigned int hash[8];
    unsigned int wbuf[16];
};

struct Electrocardiogram {
    CDUnknownFunctionPointerType *_vptr$Base;
    double _frequency;
    struct PtrVector<binarysample::ElectrocardiogramLead> _leads;
    struct {
        unsigned int frequency:1;
    } _has;
};

struct HDStatisticsCalculator_DEPRECATED<double> {
    double _min;
    double _max;
    double _mean;
    long long _count;
};

struct NSDictionary {
    Class _field1;
};

struct NSUUID {
    Class _field1;
};

struct PtrVector<binarysample::ElectrocardiogramLead> {
    struct vector<std::__1::unique_ptr<binarysample::ElectrocardiogramLead, std::__1::default_delete<binarysample::ElectrocardiogramLead>>, std::__1::allocator<std::__1::unique_ptr<binarysample::ElectrocardiogramLead, std::__1::default_delete<binarysample::ElectrocardiogramLead>>>> _v;
};

struct _HDValueAndTime;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _xmlHashTable;

struct _xsltDocument;

struct _xsltStylesheet {
    struct _xsltStylesheet *_field1;
    struct _xsltStylesheet *_field2;
    struct _xsltStylesheet *_field3;
    struct _xsltDocument *_field4;
    struct _xmlDoc *_field5;
    struct _xmlHashTable *_field6;
    int _field7;
    struct _xmlHashTable *_field8;
    struct _xsltStackElem *_field9;
    struct _xsltTemplate *_field10;
    void *_field11;
    void *_field12;
    void *_field13;
    void *_field14;
    void *_field15;
    void *_field16;
    void *_field17;
    void *_field18;
    void *_field19;
    struct _xmlHashTable *_field20;
    struct _xmlHashTable *_field21;
    struct _xmlHashTable *_field22;
    void *_field23;
    void *_field24;
    char *_field25;
    char *_field26;
    char *_field27;
    char *_field28;
    int _field29;
    struct _xsltDecimalFormat *_field30;
    int _field31;
    char *_field32;
    char *_field33;
    int _field34;
    char *_field35;
    struct _xsltElemPreComp *_field36;
    int _field37;
    int _field38;
    char *_field39;
    char **_field40;
    int _field41;
    int _field42;
    void *_field43;
    struct _xmlHashTable *_field44;
    int _field45;
    struct _xsltDocument *_field46;
    struct _xmlDict *_field47;
    void *_field48;
    char *_field49;
    int _field50;
    int _field51;
    int _field52;
    struct _xsltStylesheet *_field53;
    int _field54;
    struct _xmlHashTable *_field55;
};

struct map<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead, std::__1::less<binarysample::ElectrocardiogramLead_Name>, std::__1::allocator<std::__1::pair<const binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>> {
    struct __tree<std::__1::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::__1::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__1::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::__1::less<binarysample::ElectrocardiogramLead_Name>, true>, std::__1::allocator<std::__1::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<binarysample::ElectrocardiogramLead_Name, std::__1::__value_type<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>, std::__1::less<binarysample::ElectrocardiogramLead_Name>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct unique_ptr<binarysample::ElectrocardiogramLead, std::__1::default_delete<binarysample::ElectrocardiogramLead>>;

struct vector<_HDValueAndTime, std::__1::allocator<_HDValueAndTime>> {
    struct _HDValueAndTime *_field1;
    struct _HDValueAndTime *_field2;
    struct __compressed_pair<_HDValueAndTime *, std::__1::allocator<_HDValueAndTime>> {
        struct _HDValueAndTime *_field1;
    } _field3;
};

struct vector<std::__1::unique_ptr<binarysample::ElectrocardiogramLead, std::__1::default_delete<binarysample::ElectrocardiogramLead>>, std::__1::allocator<std::__1::unique_ptr<binarysample::ElectrocardiogramLead, std::__1::default_delete<binarysample::ElectrocardiogramLead>>>> {
    struct unique_ptr<binarysample::ElectrocardiogramLead, std::__1::default_delete<binarysample::ElectrocardiogramLead>> *__begin_;
    struct unique_ptr<binarysample::ElectrocardiogramLead, std::__1::default_delete<binarysample::ElectrocardiogramLead>> *__end_;
    struct __compressed_pair<std::__1::unique_ptr<binarysample::ElectrocardiogramLead, std::__1::default_delete<binarysample::ElectrocardiogramLead>>*, std::__1::allocator<std::__1::unique_ptr<binarysample::ElectrocardiogramLead, std::__1::default_delete<binarysample::ElectrocardiogramLead>>>> {
        struct unique_ptr<binarysample::ElectrocardiogramLead, std::__1::default_delete<binarysample::ElectrocardiogramLead>> *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *_field1;
    BOOL _field2;
    char *_field3;
    double _field4;
    double _field5;
    BOOL _field6;
} CDStruct_bafa805a;

typedef struct {
    char *_field1;
    unsigned long long _field2;
    char *_field3;
    unsigned long long _field4;
    void *_field5;
} CDStruct_57889bad;

typedef struct {
    char *_field1;
    char *_field2;
    char *_field3;
    char *_field4;
    BOOL _field5;
} CDStruct_457e09f6;

typedef struct {
    long long _field1;
    char *_field2;
    char *_field3;
    long long _field4;
    char *_field5;
    char *_field6;
} CDStruct_6b208136;

typedef struct {
    long long majorVersion;
    long long minorVersion;
    long long patchVersion;
} CDStruct_f6aba300;

// Template types
typedef struct vector<_HDValueAndTime, std::__1::allocator<_HDValueAndTime>> {
    struct _HDValueAndTime *_field1;
    struct _HDValueAndTime *_field2;
    struct __compressed_pair<_HDValueAndTime *, std::__1::allocator<_HDValueAndTime>> {
        struct _HDValueAndTime *_field1;
    } _field3;
} vector_b70ce118;

