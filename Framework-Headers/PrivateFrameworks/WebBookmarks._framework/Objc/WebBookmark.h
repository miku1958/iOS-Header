//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebBookmarks/NSCopying-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface WebBookmark : NSObject <NSCopying>
{
    BOOL _folder;
    NSString *_title;
    NSString *_url;
    NSString *_UUID;
    NSString *_serverID;
    NSString *_syncKey;
    NSData *_syncData;
    BOOL _editable;
    BOOL _deletable;
    BOOL _hidden;
    BOOL _syncable;
    BOOL _fetchedIconData;
    NSData *_iconData;
    BOOL _locallyAdded;
    int _archiveStatus;
    int _webFilterStatus;
    NSDictionary *_extraAttributes;
    NSDictionary *_localAttributes;
    int _id;
    int _parentID;
    int _specialID;
    unsigned int _orderIndex;
    BOOL _inserted;
    BOOL _needsSyncUpdate;
    unsigned long long _modifiedAttributes;
    BOOL _usedForInMemoryChangeTracking;
}

@property (readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property (strong, nonatomic) NSString *address; // @synthesize address=_url;
@property (nonatomic) int archiveStatus;
@property (strong, nonatomic) NSDate *dateAdded;
@property (strong, nonatomic) NSDate *dateLastArchived;
@property (strong, nonatomic) NSDate *dateLastFetched;
@property (strong, nonatomic) NSDate *dateLastViewed;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable; // @synthesize deletable=_deletable;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentationForInMemoryChangeTracking;
@property (readonly, nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property (strong, nonatomic) NSDictionary *extraAttributes; // @synthesize extraAttributes=_extraAttributes;
@property (nonatomic) BOOL fetchedIconData; // @synthesize fetchedIconData=_fetchedIconData;
@property (readonly, nonatomic, getter=isFolder) BOOL folder; // @synthesize folder=_folder;
@property (nonatomic) BOOL hasFetchedMetadata;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (strong, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property (readonly, nonatomic) int identifier; // @synthesize identifier=_id;
@property (readonly, nonatomic, getter=isInserted) BOOL inserted; // @synthesize inserted=_inserted;
@property (strong, nonatomic) NSDictionary *localAttributes; // @synthesize localAttributes=_localAttributes;
@property (strong, nonatomic) NSString *localPreviewText;
@property (nonatomic) BOOL locallyAdded;
@property (readonly, nonatomic) unsigned long long modifiedAttributes;
@property (nonatomic) BOOL needsSyncUpdate; // @synthesize needsSyncUpdate=_needsSyncUpdate;
@property (strong, nonatomic) NSDictionary *nextPageURLs;
@property (readonly, nonatomic) int parentID; // @synthesize parentID=_parentID;
@property (strong, nonatomic) NSString *previewText;
@property (strong, nonatomic) NSString *readingListIconURL;
@property (strong, nonatomic) NSString *readingListIconUUID;
@property (strong, nonatomic) NSString *serverID;
@property (nonatomic) BOOL shouldArchive;
@property (readonly, nonatomic) int specialID; // @synthesize specialID=_specialID;
@property (strong, nonatomic) NSData *syncData;
@property (strong, nonatomic) NSString *syncKey;
@property (readonly, nonatomic, getter=isSyncable) BOOL syncable; // @synthesize syncable=_syncable;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) int webFilterStatus;

+ (id)_trimmedPreviewText:(id)arg1;
+ (id)_trimmedTitle:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_attributesMarkedAsModified:(unsigned long long)arg1;
- (id)_initWithSqliteRow:(struct sqlite3_stmt *)arg1;
- (id)_initWithSqliteRow:(struct sqlite3_stmt *)arg1 hasIcon:(BOOL)arg2;
- (void)_markAttributesAsModified:(unsigned long long)arg1;
- (void)_markSpecial:(int)arg1;
- (void)_modifyExtraReadingListAttributes:(CDUnknownBlockType)arg1;
- (void)_modifyLocalReadingListAttributes:(CDUnknownBlockType)arg1;
- (unsigned int)_orderIndex;
- (id)_readingListPropertyNamed:(id)arg1;
- (void)_removeDirectoryAtPath:(id)arg1;
- (void)_setHidden:(BOOL)arg1;
- (void)_setID:(int)arg1;
- (void)_setInserted:(BOOL)arg1;
- (void)_setOrderIndex:(unsigned int)arg1;
- (void)_setParentID:(int)arg1;
- (void)_setSyncable:(BOOL)arg1;
- (void)_setUUID:(id)arg1;
- (void)_setUsedForInMemoryChangeTracking:(BOOL)arg1;
- (unsigned long long)_sizeForFileOrDirectory:(id)arg1 withAttributes:(id)arg2;
- (id)_suggestedFileNameForWebView:(id)arg1;
- (BOOL)_usedForInMemoryChangeTracking;
- (unsigned long long)archiveSize;
- (void)cleanupRedundantPreviewText;
- (void)clearArchive;
- (void)clearArchiveSynchronously;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)fullArchiveAvailable;
- (unsigned long long)hash;
- (id)init;
- (id)initBuiltinBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)initBuiltinDeviceBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)initCarrierBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)initFolderWithParentID:(int)arg1;
- (id)initFrequentlyVisitedSiteWithWebBookmark:(id)arg1 title:(id)arg2;
- (id)initReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3;
- (id)initWhiteListBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)initWithDictionaryRepresentationForInMemoryChangeTracking:(id)arg1;
- (id)initWithTitle:(id)arg1 address:(id)arg2;
- (BOOL)isBookmarksBarFolder;
- (BOOL)isBookmarksMenuFolder;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToBookmark:(id)arg1;
- (BOOL)isFrequentlyVisitedSitesFolder;
- (BOOL)isReadingListFolder;
- (BOOL)isReadingListItem;
- (BOOL)isWebFilterWhiteListFolder;
- (id)localizedTitle;
- (id)offlineArchiveDirectoryPath;
- (void)setTitle:(id)arg1 previewText:(id)arg2 dateLastFetched:(id)arg3;
- (id)shortTypeDescription;
- (BOOL)shouldReattemptArchiveWithAutomaticArchivingEnabled:(BOOL)arg1;
- (id)webarchivePathForNextPageURL:(id)arg1;
- (id)webarchivePathInReaderForm:(BOOL)arg1 fileExists:(BOOL *)arg2;
- (BOOL)writeOfflineWebView:(id)arg1 asArchive:(BOOL)arg2 inReaderForm:(BOOL)arg3;

@end

