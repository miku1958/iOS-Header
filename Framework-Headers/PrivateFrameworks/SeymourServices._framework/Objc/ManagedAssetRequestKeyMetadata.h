//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface ManagedAssetRequestKeyMetadata : NSManagedObject
{
}

@property (nonatomic) BOOL canFreeDeviceSlot; // @dynamic canFreeDeviceSlot;
@property (nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property (nonatomic, copy) NSString *masterPlaylist; // @dynamic masterPlaylist;
@property (nonatomic, copy) NSDate *renewDate; // @dynamic renewDate;
@property (nonatomic, copy) NSString *slotIdentifier; // @dynamic slotIdentifier;
@property (nonatomic, copy) NSString *userIdentifier; // @dynamic userIdentifier;
@property (nonatomic) int version; // @dynamic version;
@property (nonatomic, copy) NSString *workoutIdentifier; // @dynamic workoutIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

