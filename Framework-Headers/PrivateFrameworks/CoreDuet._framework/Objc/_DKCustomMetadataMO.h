//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSSet, NSString;

@interface _DKCustomMetadataMO : NSManagedObject
{
}

@property (copy, nonatomic) NSData *binaryValue; // @dynamic binaryValue;
@property (copy, nonatomic) NSDate *dateValue; // @dynamic dateValue;
@property (copy, nonatomic) NSNumber *doubleValue; // @dynamic doubleValue;
@property (strong, nonatomic) NSSet *event; // @dynamic event;
@property (copy, nonatomic) NSNumber *integerValue; // @dynamic integerValue;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property (copy, nonatomic) NSString *valueHash; // @dynamic valueHash;

+ (id)fetchRequest;

@end

