//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate;

@interface RTCLLocationMO : NSManagedObject
{
}

@property (nonatomic) double altitude; // @dynamic altitude;
@property (nonatomic) double course; // @dynamic course;
@property (nonatomic) double horizontalAccuracy; // @dynamic horizontalAccuracy;
@property (nonatomic) double latitude; // @dynamic latitude;
@property (nonatomic) double longitude; // @dynamic longitude;
@property (nonatomic) double speed; // @dynamic speed;
@property (copy, nonatomic) NSDate *timestamp; // @dynamic timestamp;
@property (nonatomic) double verticalAccuracy; // @dynamic verticalAccuracy;

+ (id)fetchRequest;
+ (id)managedObjectWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 horizontalAccuracy:(double)arg4 verticalAccuracy:(double)arg5 course:(double)arg6 speed:(double)arg7 timestamp:(id)arg8 inManagedObjectContext:(id)arg9;

@end

