//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSSet, NSUUID;

__attribute__((visibility("hidden")))
@interface MapsSyncManagedAnonymousCredential : NSManagedObject
{
}

@property (nonatomic, copy) NSData *anonymousId; // @dynamic anonymousId;
@property (nonatomic, copy) NSDate *createTime; // @dynamic createTime;
@property (nonatomic, copy) NSUUID *identifier; // @dynamic identifier;
@property (nonatomic, copy) NSData *mapsToken; // @dynamic mapsToken;
@property (nonatomic, copy) NSDate *mapsTokenCreatedAt; // @dynamic mapsTokenCreatedAt;
@property (nonatomic) long long mapsTokenTTL; // @dynamic mapsTokenTTL;
@property (nonatomic, copy) NSDate *modificationTime; // @dynamic modificationTime;
@property (nonatomic) long long positionIndex; // @dynamic positionIndex;
@property (nonatomic, strong) NSSet *reviewedPlaces; // @dynamic reviewedPlaces;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

