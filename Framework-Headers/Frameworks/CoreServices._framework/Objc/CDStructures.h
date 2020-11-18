//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, NSString, _LSDatabase;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BindingEvaluator {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    struct LSVersionNumber _field7;
    BOOL _field8;
    unsigned long long _field9;
    unsigned int _field10;
    unsigned int _field11;
    struct vector<LSBundleClass, std::__1::allocator<LSBundleClass>> _field12;
    CDUnknownBlockType _field13;
    id _field14;
    CDUnknownBlockType _field15;
    id _field16;
};

struct CSMap {
    unsigned int table;
    struct CSMapCallbacks cb;
    struct CSMapContext *context;
    struct os_unfair_lock_s _lock;
    unsigned int _generation;
    struct _CSMapHeader *_header;
    unsigned int *_keys;
    unsigned int *_values;
};

struct CSMapCallbacks {
    CDUnknownFunctionPointerType retainKey;
    CDUnknownFunctionPointerType releaseKey;
    CDUnknownFunctionPointerType getKeyHash;
    CDUnknownFunctionPointerType keyMatchesData;
    CDUnknownFunctionPointerType retainValue;
    CDUnknownFunctionPointerType releaseValue;
};

struct CSMapContext;

struct Context {
    struct LSContext *_contextPointer;
    struct LSContext _contextStorage;
    unsigned char _created;
    NSError *_error;
};

struct ExtendedBinding {
    unsigned int _field1;
    struct LSBundleData *_field2;
    unsigned int _field3;
    CDStruct_183601bc *_field4;
    id _field5;
    id _field6;
    BOOL _field7;
    BOOL _field8;
    id _field9;
    id _field10;
    char _field11;
    id _field12;
    struct optional<bool> _field13;
    struct optional<bool> _field14;
};

struct FileInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    struct Point _field4;
    unsigned short _field5;
};

struct FolderInfo {
    struct Rect _field1;
    unsigned short _field2;
    struct Point _field3;
    unsigned short _field4;
};

struct LSBinding {
    unsigned int bundle;
    struct LSBundleData *bundleData;
    unsigned int claim;
    CDStruct_183601bc *claimData;
    id userInfo;
    NSString *reason;
};

struct LSBundleData {
    unsigned int _clas;
    unsigned long long _bundleFlags;
    unsigned int _plistContentFlags;
    unsigned int _itemFlags;
    unsigned char _iconFlags;
    unsigned short _archFlags;
    unsigned int platform;
    unsigned int _hfsType;
    int _mtime;
    int _rtime;
    struct LSVersionNumber _version;
    struct LSVersionNumber _minSystemVersion;
    struct LSVersionNumber _maxSystemVersion;
    struct LSVersionNumber _execSDKVersion;
    unsigned int appStoreToolsBuildVersion;
    unsigned int machOUUIDs;
    unsigned long long sequenceNumber;
    unsigned long long compatibilityState;
    unsigned long long itemID;
    unsigned int deviceFamilies;
    unsigned int teamID;
    unsigned int identifier;
    unsigned int exactIdentifier;
    unsigned int name;
    unsigned int displayName;
    unsigned int counterpartIdentifiers;
    unsigned int filename;
    unsigned int bundleVersion;
    unsigned int shortVersionString;
    unsigned int installType;
    unsigned long long installFailureReason;
    unsigned int signerIdentity;
    unsigned int codeInfoIdentifier;
    unsigned int signerOrganization;
    unsigned int appType;
    unsigned long long staticDiskUsage;
    unsigned long long purchaserDSID;
    unsigned long long downloaderDSID;
    unsigned long long familyID;
    unsigned int vendorName;
    unsigned int itemName;
    unsigned long long storefront;
    unsigned long long versionIdentifier;
    unsigned int sourceAppIdentifier;
    unsigned int appVariant;
    unsigned long long ratingRank;
    unsigned int ratingLabel;
    unsigned long long genreID;
    unsigned int genre;
    unsigned int primaryIconName;
    unsigned int iconsDict;
    unsigned int iconFileNames;
    unsigned int execPath;
    unsigned int libraryPath;
    unsigned int libraryItems;
    unsigned int claims;
    unsigned int types;
    unsigned int plugins;
    unsigned int extensionPoints;
    unsigned int activityTypes;
    unsigned int schemesWhitelist;
    unsigned int bgPermittedIDs;
    unsigned int alias;
    unsigned int appContainerAlias;
    unsigned int dataContainerAlias;
    unsigned int container;
    unsigned char revision;
    unsigned char retries;
    unsigned char containingDirectoryClass;
    unsigned char _reserved4;
    unsigned int plistRarities;
    unsigned int commonPlistEntries;
    unsigned int entitlements;
    unsigned int groupContainers;
    unsigned int sandboxEnvironmentVariables;
    unsigned int siriActionDefinitionURLs;
    unsigned int localizedDisplayName;
    unsigned int localizedShortDisplayName;
    unsigned int localizedNameWithContext[1];
    unsigned int managedPersonas;
    unsigned int _reserved5;
};

struct LSContext {
    _LSDatabase *db;
};

struct LSExtensionPointData;

struct LSPluginData {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct LSVersionNumber _field4;
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
    struct LSVersionNumber _field19;
    struct LSVersionNumber _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned char _field26;
    unsigned int _field27;
    unsigned int _field28;
};

struct LSSchema {
    unsigned int headerTable;
    unsigned int bundleTable;
    unsigned int claimTable;
    unsigned int serviceTable;
    unsigned int utypeTable;
    struct {
        struct CSMap map;
    } bindableKeyMap;
    struct {
        struct CSMap map;
        unsigned int bindingClass;
        unsigned char isCaseInsensitive;
    } bindingMaps[12];
    unsigned int handlerPrefTable;
    unsigned int containerTable;
    unsigned int aliasTable;
    unsigned int pluginTable;
    unsigned int extensionPointTable;
    unsigned int bindingListTable;
    unsigned int propertyListTable;
    unsigned int localizedStringTable;
    unsigned int canonicalStringTable;
    struct _LSSchemaCache *_cache;
};

struct LSVersionNumber {
    unsigned char _opaque[32];
};

struct NSDictionary {
    Class _field1;
};

struct NSMutableDictionary {
    Class _field1;
};

struct Point {
    short _field1;
    short _field2;
};

struct Rect {
    short _field1;
    short _field2;
    short _field3;
    short _field4;
};

struct _CSMapHeader;

struct _LSSchemaCache;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct atomic_flag {
    _Atomic BOOL __a_;
};

struct optional<LSBinding> {
    union {
        char _field1;
        struct LSBinding _field2;
    } _field1;
    BOOL _field2;
};

struct optional<LaunchServices::BindingEvaluator> {
    union {
        char _field1;
        struct BindingEvaluator _field2;
    } _field1;
    BOOL _field2;
};

struct optional<bool> {
    union {
        char _field1;
        BOOL _field2;
    } _field1;
    BOOL _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct vector<LSBundleClass, std::__1::allocator<LSBundleClass>> {
    unsigned int *_field1;
    unsigned int *_field2;
    struct __compressed_pair<LSBundleClass *, std::__1::allocator<LSBundleClass>> {
        unsigned int *_field1;
    } _field3;
};

struct vector<LaunchServices::BindingEvaluation::ExtendedBinding, std::__1::allocator<LaunchServices::BindingEvaluation::ExtendedBinding>> {
    struct ExtendedBinding *_field1;
    struct ExtendedBinding *_field2;
    struct __compressed_pair<LaunchServices::BindingEvaluation::ExtendedBinding *, std::__1::allocator<LaunchServices::BindingEvaluation::ExtendedBinding>> {
        struct ExtendedBinding *_field1;
    } _field3;
};

struct vector<const LSExtensionPointData *, std::__1::allocator<const LSExtensionPointData *>> {
    struct LSExtensionPointData **__begin_;
    struct LSExtensionPointData **__end_;
    struct __compressed_pair<const LSExtensionPointData **, std::__1::allocator<const LSExtensionPointData *>> {
        struct LSExtensionPointData **__value_;
    } __end_cap_;
};

struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *__begin_;
    unsigned int *__end_;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *__value_;
    } __end_cap_;
};

#if 0
// Names with conflicting types:
typedef struct {
    id _field1;
    BOOL _field2;
    BOOL _field3;
    BOOL _field4;
    BOOL _field5;
    BOOL _field6;
    BOOL _field7;
} State_0f18e2a3;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8[8];
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
} CDStruct_d2548575;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

typedef struct CDStruct_183601bc;

// Template types
typedef struct optional<LSBinding> {
    union {
        char _field1;
        struct LSBinding _field2;
    } _field1;
    BOOL _field2;
} optional_430a8fae;

typedef struct optional<LaunchServices::BindingEvaluator> {
    union {
        char _field1;
        struct BindingEvaluator _field2;
    } _field1;
    BOOL _field2;
} optional_084b935d;

typedef struct vector<unsigned int, std::__1::allocator<unsigned int>> {
    unsigned int *__begin_;
    unsigned int *__end_;
    struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int>> {
        unsigned int *__value_;
    } __end_cap_;
} vector_12da65de;

#pragma mark Typedef'd Unions

typedef union {
    unsigned char _field1[32];
    struct {
        struct FileInfo _field1;
        unsigned char _field2[16];
    } _field2;
    struct {
        struct FolderInfo _field1;
        unsigned char _field2[16];
    } _field3;
} CDUnion_739f5cf2;
