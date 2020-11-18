//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class BRCAccountSession, BRCBookmark, BRCGenerationID, BRCItemID, BRCLocalContainer, BRCServerZone, NSData, NSDirectoryEnumerator, NSNumber, NSString, NSURL;

@interface BRCRelativePath : NSObject <NSSecureCoding>
{
    NSString *_absolutePath;
    NSString *_relativePath;
    BRCRelativePath *_basePath;
    BRCBookmark *_bookmark;
    NSString *_symlinkContent;
    BRCGenerationID *_generationID;
    int _deviceID;
    BRCServerZone *_serverZone;
    BRCItemID *_sharedItemID;
    NSString *_sharedOwnerName;
    unsigned char _finderInfo[32];
    unsigned long long _fileID;
    unsigned short _mode;
    unsigned int _nlink;
    struct timespec _birthtime;
    struct timespec _mtime;
    long long _size;
    unsigned long long _parentFileID;
    unsigned int _documentID;
    unsigned int _fsGenerationID;
    unsigned int _flags;
    unsigned short _type;
    unsigned char _itemScope;
    unsigned int _isExcluded:1;
    unsigned int _isInPackage:1;
    unsigned int _isBundle:1;
    unsigned int _isPackageRoot:1;
    unsigned int _readFault:1;
    unsigned int _hasFinderTags:1;
    unsigned int _isBusy:1;
    unsigned int _isAlias:1;
    unsigned int _qtnResolved:1;
    int _fd;
    _Atomic int _openRefCount;
    struct _opaque_pthread_rwlock_t _mutex;
    struct {
        int _field1;
        long long _field2;
        long long _field3;
        char *_field4;
        int _field5;
        long long _field6;
        long long _field7;
        int _field8;
        struct _opaque_pthread_mutex_t _field9;
        struct _telldir *_field10;
    } *_dir;
    NSDirectoryEnumerator *_descendantsEnumerator;
    BRCAccountSession *_session;
    NSData *_quarantineInfo;
}

@property (readonly, nonatomic) NSString *absolutePath;
@property (readonly, nonatomic) long long birthTime;
@property (readonly, nonatomic) BRCBookmark *bookmark;
@property (readonly, nonatomic) BRCLocalContainer *container;
@property (readonly, nonatomic) int deviceID;
@property (readonly, nonatomic) unsigned int documentID;
@property (readonly, nonatomic) BOOL exists;
@property (readonly, nonatomic) NSString *faultDisplayName;
@property (readonly, nonatomic) unsigned long long fileID;
@property (readonly, nonatomic) NSNumber *fileObjectID;
@property (readonly, nonatomic) unsigned int fileType;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) unsigned int fsGenerationID;
@property (readonly, nonatomic) BRCGenerationID *generationID;
@property (readonly, nonatomic) unsigned int hardlinkCount;
@property (readonly, nonatomic) BOOL hasFinderTags;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isAlias;
@property (readonly, nonatomic) BOOL isBundle;
@property (readonly, nonatomic) BOOL isBusy;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isExcluded;
@property (readonly, nonatomic) BOOL isExecutable;
@property (readonly, nonatomic) BOOL isFault;
@property (readonly, nonatomic) BOOL isFile;
@property (readonly, nonatomic) BOOL isHiddenExtension;
@property (readonly, nonatomic) BOOL isHiddenFile;
@property (readonly, nonatomic) BOOL isInPackage;
@property (readonly, nonatomic) BOOL isPackageRoot;
@property (readonly, nonatomic) BOOL isRoot;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) BOOL isUnixDir;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) unsigned char itemScope;
@property (readonly, nonatomic) NSString *logicalName;
@property (readonly, nonatomic) long long modificationTime;
@property (readonly, nonatomic) unsigned long long parentFileID;
@property (readonly) unsigned long long parentHash;
@property (readonly, nonatomic) NSString *pathRelativeToPackageRoot;
@property (readonly, nonatomic) NSString *pathRelativeToRoot;
@property (readonly, nonatomic) NSData *quarantineInfo; // @synthesize quarantineInfo=_quarantineInfo;
@property (readonly, nonatomic) BRCRelativePath *root;
@property (readonly, nonatomic) BRCServerZone *serverZone;
@property (readonly, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property (readonly, nonatomic) BRCItemID *sharedItemID;
@property (readonly, nonatomic) NSString *sharedOwnerName;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) NSString *symlinkContent;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) NSURL *url;

+ (int)locateByFileID:(unsigned long long)arg1 zone:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_close;
- (BOOL)_fixupRelativePath;
- (id)_initWithPath:(id)arg1 relativeToRoot:(id)arg2;
- (BOOL)_resolveAndKeepOpenMustExist:(BOOL)arg1 error:(int *)arg2;
- (int)_resolveBasePath;
- (int)_resolvePathTypeAndContainer;
- (int)_resolveSymlinkRelativeTo:(int)arg1 path:(id)arg2;
- (int)_resolveWhenDoesntExist;
- (int)_resolveWhenExists;
- (BOOL)_shouldKeepBasePathOpen;
- (void)close;
- (void)closeDirectoryScan;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)flock:(int)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileID:(unsigned long long)arg1 zone:(id)arg2;
- (id)initWithPath:(id)arg1 zone:(id)arg2;
- (id)initWithRootPath:(id)arg1 session:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRelativePath:(id)arg1;
- (BOOL)isResolved;
- (id)logicalURLWithLogicalName:(id)arg1;
- (id)nextChild;
- (id)nextDescendant;
- (BOOL)openDirectoryForRecursiveScan;
- (BOOL)openDirectoryForScanWithError:(int *)arg1;
- (id)pathOfPackageRoot;
- (id)pathWithChildAtPath:(id)arg1;
- (BOOL)performOnOpenFileDescriptor:(CDUnknownBlockType)arg1 error:(int *)arg2;
- (BOOL)performOnOpenParentFileDescriptor:(CDUnknownBlockType)arg1 error:(int *)arg2;
- (id)refreshFromPathMustExist:(BOOL)arg1;
- (BOOL)resolveAndKeepOpenMustExist:(BOOL)arg1 error:(int *)arg2;
- (BOOL)resolveMustExist:(BOOL)arg1 error:(int *)arg2;

@end
