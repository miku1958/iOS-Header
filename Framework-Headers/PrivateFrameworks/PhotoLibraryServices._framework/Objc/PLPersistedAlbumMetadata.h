//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSNumber, NSString, NSURL, PLGenericAlbum;

@interface PLPersistedAlbumMetadata : NSObject
{
    BOOL _isFolder;
    BOOL _pinned;
    BOOL _inTrash;
    BOOL _customSortAscending;
    BOOL _allowsOverwrite;
    int _customSortKey;
    NSString *_title;
    NSString *_uuid;
    NSString *_cloudGUID;
    NSNumber *_kind;
    NSString *_customKeyAssetUUID;
    NSMutableOrderedSet *_assetUUIDs;
    NSString *_importSessionID;
    PLGenericAlbum *_genericAlbum;
    NSURL *_metadataURL;
}

@property (nonatomic) BOOL allowsOverwrite; // @synthesize allowsOverwrite=_allowsOverwrite;
@property (strong, nonatomic) NSMutableOrderedSet *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
@property (strong, nonatomic) NSString *cloudGUID; // @synthesize cloudGUID=_cloudGUID;
@property (strong, nonatomic) NSString *customKeyAssetUUID; // @synthesize customKeyAssetUUID=_customKeyAssetUUID;
@property (nonatomic) BOOL customSortAscending; // @synthesize customSortAscending=_customSortAscending;
@property (nonatomic) int customSortKey; // @synthesize customSortKey=_customSortKey;
@property (strong, nonatomic) PLGenericAlbum *genericAlbum; // @synthesize genericAlbum=_genericAlbum;
@property (strong, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;
@property (nonatomic, getter=isInTrash) BOOL inTrash; // @synthesize inTrash=_inTrash;
@property (readonly, nonatomic) BOOL isFolder; // @synthesize isFolder=_isFolder;
@property (strong, nonatomic) NSNumber *kind; // @synthesize kind=_kind;
@property (strong, nonatomic) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
@property (nonatomic, getter=isPinned) BOOL pinned; // @synthesize pinned=_pinned;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

+ (BOOL)isValidPath:(id)arg1;
- (BOOL)_readMetadata;
- (void)_saveMetadata;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPLGenericAlbum:(id)arg1;
- (id)initWithPersistedDataAtURL:(id)arg1;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5 persistedAlbumDataDirectory:(id)arg6;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (void)persistAlbumData;
- (void)removePersistedAlbumData;
- (void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(BOOL)arg2;

@end

