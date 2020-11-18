//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CloudDocs/NSCopying-Protocol.h>
#import <CloudDocs/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString, NSURL;

@interface BRQueryItem : NSObject <NSSecureCoding, NSCopying>
{
    union {
        struct {
            unsigned int downloadStatus:2;
            unsigned int uploadStatus:2;
            unsigned int itemStatus:2;
            unsigned int conflicted:1;
            unsigned int document:1;
            unsigned int preCrashMarker:1;
            unsigned int isUploadActive:1;
            unsigned int isDownloadActive:1;
            unsigned int isDownloadRequested:1;
            unsigned int isAlias:1;
            unsigned int shareOptions:3;
            unsigned int isHiddenExt:1;
        } ;
        unsigned int value;
    } _flags;
    unsigned short _diffs;
    NSString *_containerID;
    NSString *_parentPath;
    NSString *_logicalName;
    NSString *_physicalName;
    NSNumber *_fileObjectID;
    NSNumber *_size;
    NSNumber *_mtime;
    NSNumber *_btime;
    NSMutableDictionary *_attrs;
    NSURL *_url;
    NSURL *_localRepresentationURL;
    id _replacement;
    BOOL _isNetworkOffline;
    long long _logicalHandle;
    long long _physicalHandle;
}

@property (readonly, nonatomic) NSNumber *btime; // @synthesize btime=_btime;
@property (readonly, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property (readonly, nonatomic) unsigned short diffs; // @synthesize diffs=_diffs;
@property (readonly, nonatomic) unsigned int downloadStatus;
@property (readonly, nonatomic) NSNumber *fileObjectID; // @synthesize fileObjectID=_fileObjectID;
@property (readonly, nonatomic) BOOL hasTransferStatuses;
@property (readonly, nonatomic) BOOL isAlias;
@property (readonly, nonatomic) BOOL isConflicted;
@property (readonly, nonatomic) BOOL isDead;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isDownloadActive;
@property (readonly, nonatomic) BOOL isDownloadRequested;
@property (readonly, nonatomic) BOOL isInTransfer;
@property (readonly, nonatomic) BOOL isLive;
@property (nonatomic) BOOL isNetworkOffline; // @synthesize isNetworkOffline=_isNetworkOffline;
@property (nonatomic) BOOL isPreCrash;
@property (readonly, nonatomic) BOOL isUploadActive;
@property (readonly, nonatomic) NSURL *localRepresentationURL; // @synthesize localRepresentationURL=_localRepresentationURL;
@property (readonly, nonatomic) NSString *logicalName; // @synthesize logicalName=_logicalName;
@property (readonly, nonatomic) NSNumber *mtime; // @synthesize mtime=_mtime;
@property (readonly, nonatomic) NSString *parentPath; // @synthesize parentPath=_parentPath;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *physicalName; // @synthesize physicalName=_physicalName;
@property (nonatomic) id replacement;
@property (readonly, nonatomic) unsigned int shareOptions;
@property (readonly, nonatomic) NSNumber *size; // @synthesize size=_size;
@property (readonly, nonatomic) unsigned int uploadStatus;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

+ (id)askDaemonQueryItemForURL:(id)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (void)_mergeAttrs:(id)arg1;
- (void)_mergeURL:(id)arg1;
- (void)_setAttr:(id)arg1 forKey:(id)arg2;
- (void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (id)attributeForName:(id)arg1;
- (id)attributeNames;
- (id)attributesForNames:(id)arg1;
- (BOOL)canMerge:(id)arg1;
- (void)clearDiffs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToQueryItem:(id)arg1;
- (BOOL)isHiddenExt;
- (BOOL)isShared;
- (void)markDead;
- (void)merge:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)sharedItemRole;
- (id)subclassDescription;
- (id)valueForKey:(id)arg1;

@end
