//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSSet, NSUUID;

@interface _TtC18HealthPlatformCore7Profile : NSManagedObject
{
}

@property (nonatomic, copy) NSSet *allPluginData; // @dynamic allPluginData;
@property (nonatomic, copy) NSData *encodedHKProfileIdentifier; // @dynamic encodedHKProfileIdentifier;
@property (nonatomic, copy) NSSet *feedItems; // @dynamic feedItems;
@property (nonatomic, copy) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

