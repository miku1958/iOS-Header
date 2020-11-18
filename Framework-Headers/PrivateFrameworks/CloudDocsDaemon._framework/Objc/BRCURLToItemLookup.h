//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class BRCAccountSession, BRCDocumentItem, BRCLocalItem, BRCPQLConnection, BRCRelativePath, BRCServerItem, NSString, NSURL;

@interface BRCURLToItemLookup : NSObject <NSSecureCoding>
{
    BRCAccountSession *_session;
    union {
        struct {
            unsigned int parentItem:1;
            unsigned int relpath:1;
            unsigned int pathMatch:1;
            unsigned int faultedMatch:1;
            unsigned int byIDMatch:1;
            unsigned int reservedMatch:1;
            unsigned int parentPath:1;
        } ;
        unsigned int value;
    } _hasFetched;
    BRCRelativePath *__relpath;
    BRCPQLConnection *_db;
    BOOL _allowAppLibraryRoot;
    NSURL *_url;
    BRCRelativePath *_parentRelpath;
    BRCLocalItem *_parentItem;
    NSString *_filename;
    NSString *_parentPath;
    BRCLocalItem *_byIDLocalItem;
    BRCServerItem *_byIDServerItem;
    unsigned long long _byIDDiffs;
    BRCLocalItem *_byPathLocalItem;
    BRCServerItem *_byPathServerItem;
    unsigned long long _byPathDiffs;
    BRCDocumentItem *_faultedLocalItem;
    BRCServerItem *_faultedServerItem;
    BRCRelativePath *_faultedRelpath;
    unsigned long long _faultedDiffs;
    BRCLocalItem *_reservedLocalItem;
    BRCServerItem *_reservedServerItem;
}

@property (readonly, nonatomic) unsigned long long byIDDiffs; // @synthesize byIDDiffs=_byIDDiffs;
@property (readonly, nonatomic) BRCLocalItem *byIDLocalItem; // @synthesize byIDLocalItem=_byIDLocalItem;
@property (readonly, nonatomic) CDStruct_177058d5 byIDMatch;
@property (readonly, nonatomic) BRCServerItem *byIDServerItem; // @synthesize byIDServerItem=_byIDServerItem;
@property (readonly, nonatomic) unsigned long long byPathDiffs; // @synthesize byPathDiffs=_byPathDiffs;
@property (readonly, nonatomic) BRCLocalItem *byPathLocalItem; // @synthesize byPathLocalItem=_byPathLocalItem;
@property (readonly, nonatomic) CDStruct_177058d5 byPathMatch;
@property (readonly, nonatomic) BRCRelativePath *byPathRelpath;
@property (readonly, nonatomic) BRCServerItem *byPathServerItem; // @synthesize byPathServerItem=_byPathServerItem;
@property (readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property (readonly, nonatomic) unsigned long long faultedDiffs; // @synthesize faultedDiffs=_faultedDiffs;
@property (readonly, nonatomic) BRCDocumentItem *faultedLocalItem; // @synthesize faultedLocalItem=_faultedLocalItem;
@property (readonly, nonatomic) CDStruct_177058d5 faultedMatch;
@property (readonly, nonatomic) BRCRelativePath *faultedRelpath; // @synthesize faultedRelpath=_faultedRelpath;
@property (readonly, nonatomic) BRCServerItem *faultedServerItem; // @synthesize faultedServerItem=_faultedServerItem;
@property (readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (readonly, nonatomic) BRCLocalItem *parentItem; // @synthesize parentItem=_parentItem;
@property (readonly, nonatomic) NSString *parentPath; // @synthesize parentPath=_parentPath;
@property (readonly, nonatomic) BRCRelativePath *parentRelpath; // @synthesize parentRelpath=_parentRelpath;
@property (readonly, nonatomic) unsigned short pathType;
@property (readonly, nonatomic) BRCRelativePath *relpath;
@property (readonly, nonatomic) BRCLocalItem *reservedLocalItem; // @synthesize reservedLocalItem=_reservedLocalItem;
@property (readonly, nonatomic) CDStruct_177058d5 reservedMatch;
@property (readonly, nonatomic) BRCServerItem *reservedServerItem; // @synthesize reservedServerItem=_reservedServerItem;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_appliedOrDownloadContentIfNecessary:(id)arg1 si:(id)arg2 applySchedulerState:(int *)arg3;
- (BOOL)_applyOrDownloadThumbnailIfNecessary:(id)arg1 si:(id)arg2 url:(id)arg3 updatedAddition:(BOOL *)arg4 applySchedulerState:(int *)arg5;
- (BOOL)_applyOrEvictLosersIfNecessary:(id)arg1 si:(id)arg2 url:(id)arg3 addedLosers:(id)arg4 removedLosers:(id)arg5 updatedAddition:(BOOL *)arg6 applySchedulerState:(int *)arg7;
- (BOOL)_bounceBouncesHiddenByFault:(id)arg1;
- (BOOL)_bouncePathMatchIfNecessaryWithLookup:(id)arg1 localItem:(id)arg2 serverItem:(id)arg3 bounceNamespace:(unsigned char)arg4 applyNamespace:(unsigned char)arg5;
- (BOOL)_canUpdatePathMatch:(const CDStruct_177058d5 *)arg1 hasAdditionsToApply:(BOOL)arg2;
- (void)_clearNamespace:(unsigned char)arg1;
- (void)_fetchFaultedPathMatch;
- (void)_fetchIDMatch;
- (void)_fetchPathMatch;
- (void)_fetchRelPath;
- (void)_fetchReservedPathMatch;
- (void)_moveMissingItemAsideInNamespace:(unsigned char)arg1;
- (CDStruct_177058d5)_pathMatchInNamespace:(unsigned char)arg1;
- (BOOL)_removeDirectory:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (void)clearByIDItem;
- (void)clearByPathItem;
- (void)clearFaultedItem;
- (void)clearReservedItem;
- (void)closePaths;
- (id)description;
- (void)didApplyChangesAtPath:(id)arg1 filename:(id)arg2 li:(id)arg3 si:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (void)handleReservedPathMatchesIfNeeded;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 allowAppLibraryRoot:(BOOL)arg2 session:(id)arg3;
- (id)initWithURL:(id)arg1 allowAppLibraryRoot:(BOOL)arg2 session:(id)arg3 db:(id)arg4;
- (id)initWithURL:(id)arg1 session:(id)arg2;
- (void)markPathMatchLostIfLocationDoesntMatch:(CDStruct_177058d5 *)arg1;
- (void)matchLookupItemsWithDisk;
- (void)refreshByIDDiffs;
- (void)refreshByPathDiffs;
- (void)refreshFaultedDiffs;
- (BOOL)resolveAndKeepOpenWithError:(id *)arg1;
- (BOOL)resolveParentAndKeepOpenMustExist:(BOOL)arg1 errcode:(int *)arg2;
- (BOOL)tryToDeleteItemInNamespace:(unsigned char)arg1;
- (void)tryToUpdateItemInNamespace:(unsigned char)arg1 withDstLookup:(id)arg2;

@end

