//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, _DKHistogramMO;

@interface _DKHistogramValueMO : NSManagedObject
{
}

@property (copy, nonatomic) NSNumber *count; // @dynamic count;
@property (strong, nonatomic) _DKHistogramMO *histogram; // @dynamic histogram;
@property (copy, nonatomic) NSNumber *integerValue; // @dynamic integerValue;
@property (copy, nonatomic) NSString *stringValue; // @dynamic stringValue;

+ (id)fetchRequest;

@end
