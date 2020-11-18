//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaPlaylist.h>

#import <MediaPlayer/NSCoding-Protocol.h>
#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaQuery, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCoding, NSCopying>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_properties;
    MPMediaQuery *_itemsQuery;
    void *_clusterPlaylist;
}

- (void).cxx_destruct;
- (BOOL)_allowsEditing;
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_updateLibraryForPlaylistEdit:(id)arg1;
- (void)addItemWithProductID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addMediaItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appendItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appendItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (void)endGeneratingGeniusClusterItems;
- (BOOL)existsInLibrary;
- (id)geniusClusterItemsWithCount:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1 itemsQuery:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (id)itemsQuery;
- (id)mediaLibrary;
- (unsigned long long)mediaTypes;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)multiverseIdentifier;
- (void)populateWithSeedItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)populateWithSeedItem:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeAllItems;
- (void)removeFirstItem;
- (void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)replaceItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceItemsWithPersistentIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)representativeItem;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end

