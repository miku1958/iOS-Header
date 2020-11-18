//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CSMap {
    unsigned int _field1;
    struct CSMapCallbacks _field2;
    struct CSMapContext *_field3;
    int _field4;
    unsigned int _field5;
    struct _CSMapHeader *_field6;
    unsigned int *_field7;
    unsigned int *_field8;
};

struct CSMapCallbacks {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
};

struct CSMapContext;

struct FSNode;

struct LSBundleData {
    unsigned int _clas;
    unsigned long long _bundleFlags;
    unsigned int _plistContentFlags;
    unsigned int _itemFlags;
    unsigned char _highResFlags;
    unsigned char _appNapFlags;
    unsigned short _archFlags;
    unsigned int _hfsType;
    unsigned int _hfsCreator;
    unsigned long long _inoBundle;
    unsigned long long _inoExec;
    int _mtime;
    int _rtime;
    unsigned long long _version;
    unsigned long long _minSystemVersion;
    unsigned long long _execSDKVersion;
    unsigned long long _execMinOSVersion;
    unsigned int machOUUIDs[4];
    unsigned long long sequenceNumber;
    unsigned long long itemID;
    unsigned char deviceFamily[3];
    unsigned int installType;
    unsigned int teamID;
    unsigned int identifier;
    unsigned int exactIdentifier;
    unsigned int name;
    unsigned int displayName;
    unsigned int companionAppID;
    unsigned int filename;
    unsigned int bundleVersion;
    unsigned int shortVersionString;
    unsigned int signerIdentity;
    unsigned int codeInfoIdentifier;
    unsigned int appType;
    unsigned long long staticDiskUsage;
    unsigned long long purchaserDSID;
    unsigned long long downloaderDSID;
    unsigned long long familyID;
    unsigned int vendorName;
    unsigned int itemName;
    unsigned long long storefront;
    unsigned long long versionIdentifier;
    unsigned long long ratingRank;
    unsigned int ratingLabel;
    unsigned int sourceAppIdentifier;
    unsigned int appVariant;
    unsigned int iconsDict;
    unsigned int iconFileNames;
    unsigned int execPath;
    unsigned int libraryPath;
    unsigned int libraryItems;
    unsigned int claims;
    unsigned int types;
    unsigned int services;
    unsigned int plugins;
    unsigned int activityTypes;
    unsigned int schemesWhitelist;
    unsigned int alias;
    unsigned int appContainerAlias;
    unsigned int dataContainerAlias;
    unsigned int container;
    unsigned char revision;
    unsigned char retries;
    unsigned char _reserved3;
    unsigned char _reserved4;
    unsigned int plistRarities;
    unsigned int commonPlistEntries;
    unsigned int entitlements;
    unsigned int groupContainers;
    unsigned int sandboxEnvironmentVariables;
    unsigned int _reserved5;
};

struct LSContext {
    struct LSDatabase *db;
};

struct LSPluginData {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
};

struct NSDictionary {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct _CSMapHeader;

struct __CFDictionary;

struct __CFRuntimeBase {
    unsigned long long _field1;
    unsigned char _field2[4];
    unsigned int _field3;
};

struct __CSStore;

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _opaque_pthread_rwlock_t {
    long long _field1;
    char _field2[192];
};

struct unordered_map<unsigned int, std::__1::unordered_map<unsigned int, bool, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, bool>>>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::unordered_map<unsigned int, bool, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, bool>>>>>>;

#if 0
// Names with conflicting types:
typedef struct {
    struct __CFRuntimeBase _field1;
    struct FSNode *_field2;
    unsigned int _field3;
    unsigned char _field4;
    struct __CSStore *_field5;
    struct LSSchema {
        CDStruct_13af5226 _field1;
        CDStruct_c0454aff _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        unsigned int _field6;
        CDStruct_538b3674 _field7;
        unsigned int _field8;
        CDStruct_c315bc87 _field9[12];
        unsigned int _field10;
        unsigned int _field11;
        unsigned int _field12;
        unsigned int _field13;
        unsigned int _field14;
        struct _LSSchemaCache {
            struct _opaque_pthread_rwlock_t _field1;
            struct __CFDictionary *_field2;
            id _field3;
            id _field4;
            struct unordered_map<unsigned int, std::__1::unordered_map<unsigned int, bool, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, bool>>>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::unordered_map<unsigned int, bool, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, bool>>>>>> *_field5;
            CDStruct_a561fd19 _field6;
        } _field15;
    } _field6;
} LSDatabase_753d25be;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
} CDStruct_a561fd19;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned char _field5[16];
    int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9[8];
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
} CDStruct_b227e4e8;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct CDStruct_183601bc;

typedef struct {
    struct CSMap _field1;
    unsigned int _field2;
} CDStruct_13af5226;

typedef struct {
    struct CSMap _field1;
    CDStruct_183601bc *_field2;
    CDStruct_183601bc *_field3;
    unsigned int _field4;
    unsigned char _field5;
} CDStruct_c315bc87;

typedef struct {
    struct CSMap _field1;
} CDStruct_538b3674;

