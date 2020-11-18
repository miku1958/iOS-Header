//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class MapsSyncManagedCollectionPlaceItem, MapsSyncManagedFavoriteItem, MapsSyncManagedHistoryPlaceItem, NSData;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedMixinMapItem : NSManagedObject
{
}

@property (nonatomic, strong) MapsSyncManagedCollectionPlaceItem *collectionPlaceItem; // @dynamic collectionPlaceItem;
@property (nonatomic, strong) MapsSyncManagedFavoriteItem *favoriteItem; // @dynamic favoriteItem;
@property (nonatomic, strong) MapsSyncManagedHistoryPlaceItem *historyPlaceItem; // @dynamic historyPlaceItem;
@property (nonatomic) double latitude; // @dynamic latitude;
@property (nonatomic) double longitude; // @dynamic longitude;
@property (nonatomic, copy) NSData *mapItemStorage; // @dynamic mapItemStorage;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
