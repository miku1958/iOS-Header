//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class MapsSyncManagedFavoriteItem, NSString;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedContactHandle : NSManagedObject
{
}

@property (nonatomic, strong) MapsSyncManagedFavoriteItem *favoriteItem; // @dynamic favoriteItem;
@property (nonatomic, copy) NSString *handle; // @dynamic handle;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

