//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSUUID;

@interface _DKSyncPeerMO : NSManagedObject
{
}

@property (copy, nonatomic) NSString *cloudID; // @dynamic cloudID;
@property (copy, nonatomic) NSString *deviceID; // @dynamic deviceID;
@property (copy, nonatomic) NSDate *lastSeenDate; // @dynamic lastSeenDate;
@property (copy, nonatomic) NSString *model; // @dynamic model;
@property (copy, nonatomic) NSString *rapportID; // @dynamic rapportID;
@property (copy, nonatomic) NSUUID *uuid; // @dynamic uuid;
@property (copy, nonatomic) NSString *version; // @dynamic version;

+ (id)fetchRequest;

@end

