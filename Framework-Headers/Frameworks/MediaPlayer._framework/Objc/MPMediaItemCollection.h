//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaEntity.h>

@class MPMediaItem, MPMediaQuery, NSArray;

@interface MPMediaItemCollection : MPMediaEntity
{
    unsigned long long _containedMediaTypes;
    BOOL _initializedContainedMediaTypes;
    NSArray *_items;
    unsigned long long _itemsCount;
    MPMediaQuery *_itemsQuery;
    MPMediaItem *_representativeItem;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long groupingType;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) unsigned long long mediaTypes;
@property (readonly, nonatomic) MPMediaItem *representativeItem;

+ (id)artworkCatalogCachePropertiesForGroupingType:(long long)arg1;
+ (id)collectionWithItems:(id)arg1;
+ (id)representativePersistentIDPropertyForGroupingType:(long long)arg1;
+ (id)sortTitlePropertyForGroupingType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)titlePropertyForGroupingType:(long long)arg1;
- (void).cxx_destruct;
- (BOOL)MPSD_hasDownloadableItem;
- (BOOL)MPSD_hasDownloadingItem;
- (id)_artworkCatalogRepresentativeItem;
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (id)albumArtistArtworkCatalog;
- (id)artistArtworkCatalog;
- (id)artworkCatalog;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithItemsQuery:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)itemsQuery;
- (id)multiverseIdentifier;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;

@end

