//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class MapsSyncManagedMixinMapItem, NSDate, NSNumber, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedFavoriteItem : NSManagedObject
{
}

@property (nonatomic, strong) NSSet *contactHandles; // @dynamic contactHandles;
@property (nonatomic, copy) NSDate *createTime; // @dynamic createTime;
@property (nonatomic, copy) NSString *customName; // @dynamic customName;
@property (nonatomic) BOOL hidden; // @dynamic hidden;
@property (nonatomic, copy) NSUUID *identifier; // @dynamic identifier;
@property (nonatomic, strong) NSNumber *latitude; // @dynamic latitude;
@property (nonatomic, strong) NSNumber *longitude; // @dynamic longitude;
@property (nonatomic, strong) MapsSyncManagedMixinMapItem *mapItem; // @dynamic mapItem;
@property (nonatomic, copy) NSDate *modificationTime; // @dynamic modificationTime;
@property (nonatomic, strong) NSNumber *muid; // @dynamic muid;
@property (nonatomic, copy) NSString *originatingAddressString; // @dynamic originatingAddressString;
@property (nonatomic) long long positionIndex; // @dynamic positionIndex;
@property (nonatomic, copy) NSString *shortcutIdentifier; // @dynamic shortcutIdentifier;
@property (nonatomic) short source; // @dynamic source;
@property (nonatomic) short type; // @dynamic type;
@property (nonatomic) short version; // @dynamic version;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

