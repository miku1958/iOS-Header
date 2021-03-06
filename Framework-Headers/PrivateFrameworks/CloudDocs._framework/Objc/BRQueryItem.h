//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/NSCopying-Protocol.h>
#import <CloudDocs/NSFileProviderItemDecorating-Protocol.h>
#import <CloudDocs/NSFileProviderItem_Private-Protocol.h>
#import <CloudDocs/NSSecureCoding-Protocol.h>

@class BRFileObjectID, NSArray, NSData, NSDate, NSDictionary, NSError, NSFileProviderItemVersion, NSMutableDictionary, NSNumber, NSPersonNameComponents, NSSet, NSString, NSURL, UTType;
@protocol NSFileProviderItemFlags;

@interface BRQueryItem : NSObject <NSFileProviderItem_Private, NSFileProviderItemDecorating, NSSecureCoding, NSCopying>
{
    NSString *_appLibraryID;
    NSString *_parentPath;
    NSString *_logicalName;
    NSString *_physicalName;
    NSString *_bookmarkData;
    BRFileObjectID *_fileObjectID;
    BRFileObjectID *_parentFileObjectID;
    BRFileObjectID *_shareRootFileObjectID;
    NSNumber *_size;
    NSNumber *_mtime;
    NSNumber *_btime;
    NSNumber *_lastUsedTime;
    NSNumber *_favoriteRank;
    NSNumber *_childItemCount;
    NSURL *_url;
    NSURL *_localRepresentationURL;
    NSNumber *_parentZoneRowID;
    NSNumber *_zoneRowID;
    NSMutableDictionary *_attrs;
    id _replacement;
    union {
        struct {
            unsigned int downloadStatus:2;
            unsigned int uploadStatus:2;
            unsigned int itemStatus:2;
            unsigned int conflicted:1;
            unsigned int preCrashMarker:1;
            unsigned int isUploadActive:1;
            unsigned int isDownloadActive:1;
            unsigned int isDownloadRequested:1;
            unsigned int shareOptions:3;
            unsigned int isHiddenExt:1;
            unsigned int isBRAlias:1;
            unsigned int isTrashed:1;
            unsigned int itemMode:3;
            unsigned int fromReadOnlyDB:1;
            unsigned int isSharedFolderSubItem:1;
            unsigned int isSharedToMeOrContainsSharedToMeItem:1;
            unsigned int isSharedByMeOrContainsSharedByMeItem:1;
            unsigned int editedSinceShared:1;
            unsigned char BRQueryItemKind;
            unsigned char kind;
        } ;
        unsigned long long value;
    } _flags;
    long long _logicalHandle;
    long long _physicalHandle;
    unsigned long long _parentFileID;
    unsigned short _diffs;
    BOOL _isNetworkOffline;
}

@property (readonly, nonatomic) NSString *appLibraryID;
@property (readonly, nonatomic) unsigned short br_downloadStatus;
@property (readonly, nonatomic) unsigned int br_shareOptions;
@property (readonly, nonatomic) unsigned short br_uploadStatus;
@property (readonly, nonatomic) NSNumber *btime;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, copy, nonatomic) NSNumber *childItemCount;
@property (readonly, copy) NSString *containerDisplayName;
@property (readonly, copy, nonatomic) NSDate *contentModificationDate;
@property (readonly, copy, nonatomic) UTType *contentType;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *decorations;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned short diffs;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSNumber *documentSize;
@property (readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property (readonly, nonatomic, getter=isDownloaded) BOOL downloaded;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, copy, nonatomic) NSError *downloadingError;
@property (readonly, nonatomic) BOOL editedSinceShared;
@property (readonly, nonatomic, getter=isExcludedFromSync) BOOL excludedFromSync;
@property (readonly, nonatomic) NSDictionary *extendedAttributes;
@property (readonly, nonatomic) NSNumber *favoriteRank;
@property (readonly, nonatomic) BRFileObjectID *fileObjectID;
@property (readonly, copy) NSString *fileSystemFilename;
@property (readonly, copy) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, nonatomic) id<NSFileProviderItemFlags> flags;
@property (readonly, nonatomic, getter=fp_isAddedByCurrentUser) BOOL fp_addedByCurrentUser;
@property (readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property (readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property (readonly, copy) NSString *fp_cloudContainerIdentifier;
@property (readonly, copy) NSString *fp_domainIdentifier;
@property (readonly) BOOL fp_isContainer;
@property (readonly) BOOL fp_isContainerPristine;
@property (readonly, nonatomic, getter=fp_isLastModifiedByCurrentUser) BOOL fp_lastModifiedByCurrentUser;
@property (readonly, copy) NSString *fp_parentDomainIdentifier;
@property (readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property (readonly, getter=fp_isUbiquitous) BOOL fp_ubiquitous;
@property (readonly, copy) NSNumber *hasUnresolvedConflicts;
@property (readonly) unsigned long long hash;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL isBRAlias;
@property (readonly, nonatomic) BOOL isConflicted;
@property (readonly, nonatomic) BOOL isDead;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isDownloadActive;
@property (readonly, nonatomic) NSNumber *isDownloadRequested;
@property (readonly, nonatomic) BOOL isFinderBookmark;
@property (readonly, nonatomic) BOOL isInTransfer;
@property (readonly, nonatomic) BOOL isLive;
@property (nonatomic) BOOL isNetworkOffline;
@property (nonatomic) BOOL isPreCrash;
@property (readonly, nonatomic) BOOL isSymlink;
@property (readonly, nonatomic) BOOL isTrashed;
@property (readonly, nonatomic) BOOL isUploadActive;
@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property (readonly, copy, nonatomic) NSDate *lastUsedDate;
@property (readonly, nonatomic) NSNumber *lastUsedTime;
@property (readonly, nonatomic) NSURL *localRepresentationURL;
@property (readonly, nonatomic) NSString *logicalName;
@property (readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (readonly, nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded;
@property (readonly, nonatomic) NSNumber *mtime;
@property (readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property (readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property (readonly, nonatomic) NSString *parentPath;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *physicalName;
@property (readonly, nonatomic) NSString *preformattedMostRecentEditorName;
@property (readonly, nonatomic) NSString *preformattedOwnerName;
@property (readonly, copy) NSString *providerIdentifier;
@property (nonatomic) id replacement;
@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly, nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser;
@property (readonly, copy) NSString *sharingPermissions;
@property (readonly, nonatomic) NSNumber *size;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSData *tagData;
@property (readonly, nonatomic, getter=isTopLevelSharedItem) BOOL topLevelSharedItem;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic, getter=isUploaded) BOOL uploaded;
@property (readonly, nonatomic, getter=isUploading) BOOL uploading;
@property (readonly, copy, nonatomic) NSError *uploadingError;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSData *versionIdentifier;

+ (id)askDaemonQueryItemForURL:(id)arg1 andFakeFSEvent:(BOOL)arg2 error:(id *)arg3;
+ (id)askDaemonQueryItemForURL:(id)arg1 error:(id *)arg2;
+ (id)containerItemForContainer:(id)arg1 forceScan:(BOOL)arg2;
+ (id)containerItemForContainer:(id)arg1 withDocumentsItem:(id)arg2;
+ (id)containerItemForContainer:(id)arg1 withDocumentsItem:(id)arg2 zoneRowID:(id)arg3;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_isInSharedZone;
- (BOOL)_isSharedFolderSubItem;
- (void)_mergeAttrs:(id)arg1;
- (void)_mergeURL:(id)arg1;
- (void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (id)attributeForName:(id)arg1;
- (id)attributeNames;
- (id)attributesForNames:(id)arg1;
- (BOOL)canMerge:(id)arg1;
- (void)clearDiffs;
- (id)containerIDIfDesktopOrDocuments;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)downloadingStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)filePath;
- (id)fileSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToQueryItem:(id)arg1;
- (BOOL)isHiddenExt;
- (id)localizedFileNameIfDesktopOrDocuments;
- (void)markDead;
- (void)merge:(id)arg1;
- (void)mergeProgressUpdate:(id)arg1;
- (id)owner;
- (id)parentFileID;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)sharedItemRole;
- (id)subclassDescription;
- (id)valueForKey:(id)arg1;

@end

