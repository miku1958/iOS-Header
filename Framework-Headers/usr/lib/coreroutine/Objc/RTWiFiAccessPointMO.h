//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, RTFingerprintMO;

@interface RTWiFiAccessPointMO : NSManagedObject
{
}

@property (copy, nonatomic) NSNumber *age; // @dynamic age;
@property (copy, nonatomic) NSNumber *channel; // @dynamic channel;
@property (copy, nonatomic) NSDate *date; // @dynamic date;
@property (strong, nonatomic) RTFingerprintMO *fingerprint; // @dynamic fingerprint;
@property (copy, nonatomic) NSString *mac; // @dynamic mac;
@property (copy, nonatomic) NSNumber *rssi; // @dynamic rssi;

+ (id)fetchRequest;
+ (id)managedObjectWithAccessPoint:(id)arg1 inManagedObjectContext:(id)arg2;

@end
